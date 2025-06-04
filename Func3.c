/*Описать функцию CircleS(R) вещественного типа, 
находящую площадь круга радиуса R (R — вещественное). 
С помощью этой функции найти площади трех кругов с 
данными радиусами. Площадь круга радиуса R вычисляется по формуле 
S = π·R2. В качестве значения π использовать 3.14.*/

#include<stdio.h>

double Circles(double R) {
    double pi = 3.14;
    double S = pi * R * R;
    return S;
    }

int main() {
    double r1, r2, r3;
    scanf("%lf %lf %lf", &r1, &r2, &r3); 
    double result1 = Circles(r1);
    double result2 = Circles(r2);
    double result3 = Circles(r3);
    return printf("%lf %lf %lf", result1, result2, result3);
    }
    
