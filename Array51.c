/*Array51. Даны массивы A и B одинакового размера N. 
Поменять местами их содержимое и вывести вначале элементы преобразованного массива A, 
а затем — элементы преобразованного массива B.*/

#include <stdio.h> 

int main(){
    int A[100];
    int B[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        }
    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
        }
    
    for (int i = 0; i < n; i++) {
        int num = A[i];
        A[i] = B[i];
        B[i] = num;
        }
        
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);}
    return 0;
}