/*Описать функцию TriangleP(a, h), находящую периметр 
равнобедренного треугольника по его основанию a и высоте h, 
проведенной к основанию (a и h — вещественные). 
С помощью этой функции найти периметры трех треугольников, 
для которых даны основания и высоты. 
Для нахождения боковой стороны b треугольника использовать теорему Пифагора:
b2 = (a/2)2 + h2.*/

#include<stdio.h>
#include<math.h>

double TriangleP(double a, double h) {
    double b = sqrt((a/2)*(a/2) + h*h);
    double P = 2 * b + a;
    return P;
    }
    
int main() {
double a, h;
for (int i = 1; i <= 3; i = i + 1) {
    scanf("%lf", &a);
    scanf("%lf", &h);
    printf("%d %.2f\n", i, TriangleP(a, h));
    }
return 0;
}