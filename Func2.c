/*Описать функцию RootCount(A, B, C) целого типа, 
определяющую количество корней квадратного уравнения A·x2 + B·x + C = 0 
(A, B, C — вещественные параметры, A ≠ 0). 
С ее помощью найти количество корней для каждого из трех квадратных уравнений 
с данными коэффициентами. Количество корней определять по значению дискриминанта:
D = B2 − 4·A·C.*/

#include<stdio.h>

double RootCount(double A, double B, double C) {
    int d = (B*B) - (4 * (A *C));
    if (d > 0) {
        return 2;}
    else if (d == 0) {
        return 1;}
    else {
        return 0;}
        }

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c); 
    int result = RootCount(a, b, c);
    return printf("%d", result);
    }
    