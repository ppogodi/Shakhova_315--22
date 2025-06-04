/*Func6°. Описать функцию SumRange(A, B) целого типа, 
находящую сумму всех целых чисел от A до B включительно (A и B — целые). 
Если A > B, то функция возвращает 0. 
С помощью этой функции найти суммы чисел от A до B и от B до C, если даны числа A, B, C.*/

#include<stdio.h>
#include<math.h>

int SumRange(int a, int b) {
    int sum = 0;
    if (a > b) {
        return 0;
        }
    else {
        for (int i = a; i <= b; i++) {
            sum = sum + i;}
        }
        return sum;
    }
    
int main() {
int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("%d\n", SumRange(a, b));
    printf("%d\n", SumRange(b, c));
return 0;
}