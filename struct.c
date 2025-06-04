/*Структура типа время.
Массив структуры, ввод, распечатать.
*/

#include<stdio.h>
#define SIZE 100

struct FIO {
    char name[20];
    char patronymic[20];
    char surname[20];
    };

int main(){
    int n;
    scanf("%d", &n);
    struct FIO fio[SIZE];
    for (int i = 0; i < n; i++) {
        scanf("%s %s %s", &fio[i].name, &fio[i].patronymic, &fio[i].surname);
        }
    
    for (int i = 0; i < n; i++) {
        printf("%s %s %s\n", fio[i].name, fio[i].patronymic, fio[i].surname);
        }
    
    return 0;
}