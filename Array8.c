/*Array8. Дан целочисленный массив размера N. 
Вывести все содержащиеся в данном массиве 
нечетные числа в порядке возрастания их индексов,
а также их количество K.*/

#include <stdio.h> 

int main(){
    int arr[100];
    int n;
    int k = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        }
        
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 1)  {
            k = k + 1;
            printf("%d ", arr[i]);
            }   
    }
    printf("\n%d ", k); 
    return 0;
}