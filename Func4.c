/*Описать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца, заключенного
между двумя окружностями с общим центром и радиусами R1 и R2 (R1 и R2 — вещественные, R1 > R2). 
С ее помощью найти площади трех колец, для которых даны внешние и внутренние радиусы. Воспользоваться
формулой площади круга радиуса R: S = π·R2. В качестве значения π использовать 3.14.*/ 
 
#include<stdio.h> 
 
double RingS(double R1, double R2) { 
    double pi = 3.14; 
    double S1 = pi * R1 * R1; 
    double S2 = pi * R2 * R2;
    double S3 = S1 - S2;
    return S3; 
    } 
 
int main() { 
    double R1, R2; 
    for (int i = 1; i <= 3; i++) {
        scanf("%lf", &R1);
        scanf("%lf", &R2);
        printf("%d %.2f\n", i, RingS(R1, R2));}
    return 0;
}