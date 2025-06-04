/*Array11. Дан массив A размера N и целое число K (1 ≤ K ≤ N). 
Вывести элементы массива с порядковыми номерами, 
кратными K: AK, A2·K, A3·K, … . 
Условный оператор не использовать.*/

#include <stdio.h> 

int main(){
    int A[100];
    int n;
    int k;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        }
    
    for (int i = 0; i < n; i++) {
        if (i % k == 0)  {
            printf("%d ", A[i]);
            } 
    }  
    return 0;
}