/*  Дан массив A размера N и целое число K (1 ≤ K ≤ N).
Преобразовать массив, увеличив каждый его элемент на и
сходное значение элемента AK.*/

#include <stdio.h>
#define AR_LEN 100
int main() {
    int ar[AR_LEN];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i = i + 1) {
        scanf("%d", &ar[i]);
    }
    int k;
    scanf("%d", &k);
    //int x = ar[k];
    for (int i = 0; i < n; i = i + 1) {
        ar[i] = ar[i] + k; //x поменяла на k
    }

    int i = 0;
    while (i < n) {
        printf("%d ", ar[i]);
        i = i + 1;
    }
    return 0;
}