/*Func8. Описать функцию Quarter(x, y) целого типа, 
определяющую номер координатной четверти, 
в которой находится точка с ненулевыми 
вещественными координатами (x, y). 
С помощью этой функции найти номера координатных 
четвертей для трех точек с данными ненулевыми координатами.
*/

#include<stdio.h>

int Quarter(int x, int y){
    if (x > 0 && y > 0) {
        return 1;
        }
    else if (x < 0 && y > 0) {
        return 2;
        }
    else if (x < 0 && y < 0) {
        return 3;
        }
    else if (x > 0 && y < 0) {
        return 4;
        } 
    return 0;
    }

int main(){
    printf("%d", Quarter(1, 2));
    printf("\n%d", Quarter(4, -5));
    printf("\n%d", Quarter(-3, 1));
}