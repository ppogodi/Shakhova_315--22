#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "func.h"
#include "vacancy.h"

#define N_POSITIONS 100

void rec_to_s(char s[100], Vacancy rec) {
    /** функция печати */
    char format[] = "%d.%d %s %d %c";
    sprintf(s, format, rec.date.day, rec.date.month, rec.position, rec.salary, rec.relevance);
}

void show_menu() {
    printf(
        "0. Выход\n"
        "1. О программе\n"
        "2. Загрузка из файла\n"
        "3. Печать списка\n"
        "4. Выполнение запроса\n");
}

int load_vacancys(char* fname, Vacancy vacancys[], int limit) {
    FILE* in = fopen(fname, "r");
    int count = 0;
    Vacancy rec;

    while (count < limit && fscanf(in, "%d.%d %s %d %c",
        &rec.date.day,
        &rec.date.month,
        rec.position,
        &rec.salary,
        &rec.relevance) == 5)
    {
        vacancys[count] = rec;
        count = count + 1;
    }
    fclose(in);
    return count;
}

void echo_print(Vacancy vacancys[], int limit) {
    for (int i = 0; i < limit; i = i + 1) {
        char s[100] = "";
        rec_to_s(s, vacancys[i]);
        puts(s);
    }
}

void swap_vacancies(Vacancy* a, Vacancy* b) {
    Vacancy temp = *a;
    *a = *b;
    *b = temp;
}

void actual_vacancy(Vacancy vacancys[], int limit, const char* fname) {
    // фильтр актуальных вакансий
    Vacancy relevant[N_POSITIONS];
    int relevant_count = 0;

    for (int i = 0; i < limit; i++) {
        if (vacancys[i].relevance == 'д') {
            relevant[relevant_count] = vacancys[i];
            relevant_count++;
        }
    }

    // сортировка по алфавиту (пузырьком)
    for (int i = 0; i < relevant_count - 1; i++) {
        for (int j = 0; j < relevant_count - i - 1; j++) {
            if (strcmp(relevant[j].position, relevant[j + 1].position) > 0) {
                swap_vacancies(&relevant[j], &relevant[j + 1]);
            }
        }
    }

    // записать в файл
    FILE* out = fopen(fname, "w");
    fprintf(out, "Вакансия\tОклад\n");
    for (int i = 0; i < relevant_count; i++) {
        fprintf(out, "%s\t%d\n", relevant[i].position, relevant[i].salary);
    }
    fclose(out);
}