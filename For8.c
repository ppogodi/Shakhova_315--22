/* Даны два целых числа A и B (A < B). 
Найти произведение всех целых чисел от A до B включительно.*/
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int mult = 1;
    for (int i = a; i <= b; i = i + 1) {
        mult = mult * i;
                }
    printf("%d ", mult);
    return 0;
}