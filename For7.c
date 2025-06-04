/* Даны два целых числа A и B (A < B). 
Найти сумму всех целых чисел от A до B включительно.*/
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int sum = 0;
    for (int i = a; i <= b; i = i + 1) {
        sum = sum + i;
                }
    printf("%d ", sum);
    return 0;
}