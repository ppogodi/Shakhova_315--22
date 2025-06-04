// Даны целые числа K и N (N > 0). Вывести N раз число K.
#include <stdio.h>

int main()
{
  int n, k;
  int i = 0;
  scanf("%d", &n);
  scanf("%d", &k);
  while (i < n) {
      printf("%d\n", k);
      i = i + 1;
                }
    return 0;
}