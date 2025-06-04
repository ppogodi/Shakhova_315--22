/* Даны два целых числа A и B (A < B). 
Вывести в порядке возрастания все целые числа, 
расположенные между A и B (включая сами числа A и B), а также количество N этих чисел.*/
#include <stdio.h>

int main()
{
  int a, b, n;
  scanf("%d", &a);
  scanf("%d", &b);
  int i = a;
  n = 0;
  while (i <= b) {
      printf("%d ", i);
      n = n + 1;
      i = i + 1;
                }
    printf("\n");
    printf("%d", n);
    
    return 0;
}