/*Array19. Дан целочисленный массив A размера 10.
Вывести порядковый номер последнего из тех его элементов AK, 
которые удовлетворяют двойному неравенству A1 < AK < A10. 
Если таких элементов нет, то вывести 0.*/

#include<stdio.h>

int main(){
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        printf("%d ", arr[i]);
        }
        
    for (int i = 10; i >= 0; i--){
        if ((arr[0] < arr[i])&&(arr[i] < arr[9])) {
            printf("\n%d", i);
            break;
        }
    }
    printf("\n0");
    return 0;
}