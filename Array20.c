/*Array20. Дан массив размера N и целые числа K и L (1 ≤ K ≤ L ≤ N). 
Найти сумму элементов массива с номерами от K до L включительно.*/

#include <stdio.h> 

int main(){
    int A[100];
    int n, k, L;
    int sum = 0;
    scanf("%d %d %d", &n, &k, &L);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        }
    
    for (int i = 0; i < n; i++) {
        if ((k <= A[i]) && (A[i] <= L)) {
            sum = A[i] + sum;
        } 
    }
    printf("%d ", sum);
    return 0;
}