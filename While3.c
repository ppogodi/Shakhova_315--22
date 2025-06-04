/* Даны два целых числа A и B (A < B). 
Вывести в порядке убывания все целые числа, расположенные между A и B 
(не включая числа A и B), а также количество N этих чисел.*/
#include <stdio.h>

int main()
{
  int a, b, n;
  scanf("%d", &a);
  scanf("%d", &b);
  int i = a;
  n = 0;
  while (i < (b - 1)) {
      b = b - 1;
      printf("%d ", b);
      n = n + 1;
                }
    printf("\n");
    printf("%d", n);
    
    return 0;
}