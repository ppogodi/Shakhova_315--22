// задание 1. Использовать цикл while внутри for (~12 минут)
#include <stdio.h>
int main() {
	// 1. Ввести m и n
	int m, n;
	scanf("%d %d", &m, &n);
	// 2. M раз
	int i;
	for (i = 0; i < m; i = i + 1) {
		// отпечатать N звездочек
		int j = 0;
		while (j < n) {
			printf("*");
			j = j + 1;
		}
		// отпечатать перевод на новую строку
		printf("\n");
	}
	return 0;
}