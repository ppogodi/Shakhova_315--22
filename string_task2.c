/*Задача 2. Проверка, является ли строка палиндромом
Напишите программу, которая считывает строку и проверяет, 
является ли она палиндромом (читается одинаково слева направо и справа налево). 
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 100

int main() {
    char str[SIZE];
    int count = 0;
    
    fgets(str, SIZE, stdin);
    size_t len = strlen(str);

    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    
    for (int i = 0; i < len / 2; i++) {
        if (tolower((char)str[i]) == tolower((char)str[len - 1 - i])) {
            count++;
        }
    }
    
    if (count == len/2) {
        printf("YES");
        }
    else {
        printf("NO");
    }
    
    return 0;
}
