/*Задача 1. Подсчёт количества вхождений символа в строку
Напишите программу, которая считывает строку и символ, 
а затем выводит, сколько раз этот символ встречается в строке.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 100

int main() {
    char c;
    int count = 0;
    char str[SIZE];
    
    fgets(str, SIZE, stdin);
    scanf("%c", &c);
    
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == c) {
            count++;
            }
        }
    printf("%d", count);
    
    return 0;
}
