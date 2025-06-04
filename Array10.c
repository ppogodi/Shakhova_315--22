/*Array10. Дан целочисленный массив размера N. 
Вывести вначале все содержащиеся в данном массиве 
четные числа в порядке возрастания их индексов, 
а затем — все нечетные числа в порядке убывания их индексов.*/

#include <stdio.h> 

int main(){
    int arr[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)  {
            printf("%d ", arr[i]);
            } 
    }  
    printf("\n");
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] % 2 != 0)  {
            printf("%d ", arr[i]);
            } 
    }

    return 0;
}