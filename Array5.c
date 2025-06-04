/*Array5. Дано целое число N (> 2).
Сформировать и вывести целочисленный массив размера N, 
содержащий N первых элементов 
последовательности чисел Фибоначчи FK:

F1 = 1,        F2 = 1,        FK = FK−2 + FK−1,    K = 3, 4, … .*/

#include <stdio.h>

int main(){
    int arr[100];
    int n; 
    scanf("%d", &n);
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < n; i++) {
        arr[i] = arr[i-1] + arr[i-2];
        }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);}
    
    return 0;
}