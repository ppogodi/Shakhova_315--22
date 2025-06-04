/*Array18. Дан массив A ненулевых целых чисел размера 10. 
Вывести значение первого из тех его элементов A(K), 
которые удовлетворяют неравенству A(K) < A(10). 
Если таких элементов нет, то вывести 0.*/

#include <stdio.h> 

int main(){
    int A[100];
    int n = 10;
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        }
    
    for (int i = 0; i < n; i++) {
        if (A[i] > A[9])  {
            printf("%d ", A[i]);
            break;} 
        else if (A[i] < A[9]){
            printf("0");
            break;
            }
    }  
    return 0;
}
