/*Array4°. Дано целое число N (> 1), 
а также первый член A и знаменатель D геометрической прогрессии. 
Сформировать и вывести массив размера N, 
содержащий N первых членов данной прогрессии:

A,    A·D,    A·D^2,    A·D^3,    … .*/

#include <stdio.h> 

int main(){
    int arr[100];
    int n, a, d, d2;
    scanf("%d %d %d", &n, &a, &d);
    arr[0] = a;
    d2 = d;
    for (int i = 1; i < n; i++) {
        arr[i] = a * (d2);
        d2 = d2 * d;
        }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);}
    
    return 0;
}