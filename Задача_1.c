Задание 1. В начале строки могут быть пробелы. Доработать программу, чтобы их пропускать
#include<stdio.h>

int main() {
    char str[100];
    scanf("%s", str);
    int i = 0;
    int num = 0;
    int digit;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            i++;
            }
        digit = str[i] - '0';
        num = 10 * num + digit;
        i = i + 1;
    }
    printf("n = %d\n", num);
    return 0;
}
Задание 2. В конце могут быть пробелы. При появлении пробела преобразование должно быть закончено

#include <stdio.h>
int main() {
    char str[100];
    scanf("%s", str);
    /** для простоты считаем, что только цифры или '\0' */
    int i = 0;
    int num = 0;
    int digit;
     while (str[i] == ' ') {
            i = i+1;
            }
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            break;}
        else {
        digit = str[i] - '0';
        num = 10 * num + digit;}
        i = i + 1;
    }
    printf("n = %d\n", num);
    return 0;
}

Задание 3. В строке может быть несколько групп цифр. Нужно из каждой группы получить число и найти сумму этих чисел

