/*Array52. Дан массив A размера N. 
Сформировать новый массив B того же размера, 
элементы которого определяются следующим 
образом:

BK = 2·AK, если AK < 5, AK/2 в противном случае.
*/

#include<stdio.h>
#define ARR_LEN 20

int main() {
    int n, arr_a[ARR_LEN]; 
    float arr_b[ARR_LEN] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr_a[i]);
        }
        
    for (int j = 0; j < n; j++) {
        if (arr_a[j] < 5) {
            arr_b[j] = arr_a[j] * 2;
        }
        else if (arr_a[j] >= 5) {
            arr_b[j] = arr_a[j] / 2.0;
            }
    }
    
     for (int i = 0; i < n; i++) {
        printf("%.2f ", arr_b[i]);
        }
        
    return 0;
}
