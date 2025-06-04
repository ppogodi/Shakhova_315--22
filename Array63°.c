/*Array63°. Даны два массива A и B размера 5, 
элементы которых упорядочены по возрастанию. 
Объединить эти массивы так, чтобы результирующий массив C 
(размера 10) остался упорядоченным по возрастанию.
*/

#include <stdio.h>
#define SIZE 5
#define SIZE_MAX (SIZE * 2)

void read_array(int arr[], int size);

int main() {
    int ar_a[SIZE], ar_b[SIZE];
    
    read_array(ar_a, SIZE);    
    read_array(ar_b, SIZE);
    
    int ar_c[SIZE_MAX] = {0};
    int i = 0, j = 0, k = 0;

    while (i < SIZE && j < SIZE) {
        if (ar_a[i] <= ar_b[j]) {
            ar_c[k++] = ar_a[i++];
        } else {
            ar_c[k++] = ar_b[j++];
        }
    }
    
    while (i < SIZE) {
        ar_c[k++] = ar_a[i++];
    }
    
    while (j < SIZE) {
        ar_c[k++] = ar_b[j++];
    }
    
    for (int idx = 0; idx < SIZE_MAX; idx++) {
        printf("%d ", ar_c[idx]);
    }

    return 0;
}

void read_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}