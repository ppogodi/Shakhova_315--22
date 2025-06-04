/*Func7. Описать функцию Calc(A, B, Op) вещественного типа, 
выполняющую над ненулевыми вещественными числами A и B 
одну из арифметических операций и возвращающую ее результат. 
Вид операции определяется целым параметром Op: 1 — вычитание, 2 — умножение, 3 — деление, 
остальные значения — сложение. 
С помощью Calc выполнить для данных A и B операции, определяемые данными целыми N1, N2, N3.*/

#include<stdio.h>
#include<math.h>

float Calc(int a, int b, int op) {
    float res;
    if (op == 1) {
        return (a - b);
        }
    else if (op == 2) {
        return (a * b);
        }
    else if (op == 3) {
        return res = (float) a / b;
        }
    else {
        return (a + b);
        }
    }
    
int main() {
int a, b, op;
    scanf("%d %d %d", &a, &b, &op);
    printf("%.2f\n", Calc(a, b, op));
return 0;
}