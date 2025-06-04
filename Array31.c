/*Array31. Дан массив размера N. 
Найти номера тех элементов массива, 
которые больше своего левого соседа, 
и количество таких элементов. 
Найденные номера выводить в порядке их убывания.
*/

#include<stdio.h>
#define ARR_LEN 20

int main() {
    int n, arr[ARR_LEN], count = 0; 
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        }
        
    for (int j = n; j >= 0; j--) {
        if (arr[j] > arr[j - 1]) {
            count++;
            printf("%d ", j);
        }
    }
    printf("\n%d ", count);    
    return 0;
}