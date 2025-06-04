/* Даны два целых числа A и B (A < B).
Найти сумму квадратов всех целых чисел от A до B включительно.*/
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int sqr = 0;
    for (int i = a; i <= b; i = i + 1) {
        sqr = (i * i) + sqr;
                }
    printf("%d ", sqr);
    return 0;
}