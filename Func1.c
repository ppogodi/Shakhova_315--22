/*Описать функцию Sign(X) целого типа, 
возвращающую для вещественного числа X следующие значения:

−1,    если X < 0;        0,    если X = 0;        1,    если X > 0.

С помощью этой функции найти значение выражения 
Sign(A) + Sign(B) для данных вещественных чисел A и B.*/

#include<stdio.h>

int Sign(double x){
    if (x < 0) {
        return -1;
    }
    else if (x == 0) {
        return 0;
    }
    else (x > 0) {
        return 1;
    }
}

int main() {
    double a;
    double b;
    scanf("%lf", &a); 
    scanf("%lf", &b);
    int result;
    result = Sign(a) + Sign(b);
    return printf("%d", result);
    }
    
