// задание 2. Использовать цикл for внутри while (~8 минут)
#include <stdio.h>
int main() {
	// 1. Ввести m и n
	int m, n;
	scanf("%d %d", &m, &n);
	// 2. M раз
	int i = 0;
	while (i < m) {
		// отпечатать N звездочек
		i = i + 1;
		int j;
		for (j = 0; j < n; j = j + 1) {
			printf("*");
		}
		// отпечатать перевод на новую строку
		printf("\n");
	}
	return 0;
}
