/*Array60. Дан массив A размера N. 
Сформировать новый массив B того же размера по следующему правилу: 
элемент BK равен сумме элементов массива A с номерами от K до N.
*/

#include<stdio.h>
#define ARR_LEN 100


int main() {
    int ar_a[ARR_LEN] = {0};
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar_a[i]);
        }
        
    int ar_b[ARR_LEN] = {0};
    int sum = 0;
    for (int j = 0; j < n; j++) {
        sum = 0;
        for (int i = j; i < n; i++) {
            sum += ar_a[i];
        }
        ar_b[j] = sum;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", ar_b[i]);
        }    
    
    return 0;
}
