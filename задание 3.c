// задание 3. Использовать цикл while внутри while (~8 минут)
#include <stdio.h>
int main() {
	// 1. Ввести m и n
	int m, n;
	scanf("%d %d", &m, &n);
	// 2. M раз
	int i = 0;
	while (i < m) {
		// отпечатать N звездочек
		int j = 0;
		i = i + 1;
		while (j < n) {
			printf("*");
			j = j + 1;
		}
		// отпечатать перевод на новую строку
		printf("\n");
	}
	return 0;
}