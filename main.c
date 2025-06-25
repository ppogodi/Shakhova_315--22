/*21.В базе данных кадрового агентства хранятся сведения о вакансиях, включая следующие требования: образование, профессию,  уровень владения компьютером.
Структура входного файла in.txt
Дата опубликования	Вакансия	Оклад	Актуальность
15.05				Токарь	    40000		д
16.05				Программист	50000		н
16.05				Аналитик	80000		д
...
Сформировать список актуальных вакансий, упорядочив по алфавиту
Структура выходного файла out.txt
Вакансия	Оклад
Аналитик	80000
Токарь	    40000*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "func.h"
#include "vacancy.h"

#define AR_LEN 1000
#define TRUE 1

int main() {
    setlocale(LC_ALL, "");
    int count = 0; // фактическое количество элементов в массиве

    Vacancy vacancys[AR_LEN];
    while (TRUE) {
        int item = -1;
        show_menu();
        scanf("%d", &item);
        if (item == 0) {
            /** выход */
            printf("Спасибо за использование нашей разработки\n");
            getchar();
            break;
        }
        else if (item == 1) {
            /** о программе */
            printf("Студент Шахова Наталия Андреевна группа 315ИС-22\n");
            printf("Вариант №21. Тема: Кадровое агентство\n");
            getchar();
        }
        else if (item == 2) {
            /** загрузка из файла */
            count = load_vacancys("in.txt", vacancys, AR_LEN);
            printf("Файл загружен в память\n");
            getchar();
        }
        else if (item == 3) {
            /** печать списка, прочитанного из входного файла */
            echo_print(vacancys, count);
            getchar();
        }
        else if (item == 4) {
            /** выполнение запроса и сохранение результата */
            actual_vacancy(vacancys, count, "out.txt");
            printf("Результат сохранен в файле %s\n", "out.txt");
            getchar();
        }
        else {
            /** ошибочный ввод */
            printf("ошибка. пункты от 0 до 3\n");
            getchar();
        }
    }

    return 0;
}