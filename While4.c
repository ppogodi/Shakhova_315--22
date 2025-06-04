/*Дано целое число N (> 0). 
Если оно является степенью числа 3, 
то вывести true, если не является — вывести false.*/

#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    while ( N % 3 == 0) {
        N = N / 3;
    }
    if (N == 1) {
        return printf("true"); }
    else { 
        return printf("false"); }
        
    return 0;
    }
    