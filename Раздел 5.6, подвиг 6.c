/*Раздел 5.6, подвиг 6*/
#include <stdio.h>

int main(void)
{
    // здесь продолжайте программу
    int ar_2D[4][3];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &ar_2D[i][j]);
        }
    }
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 4; i++) {
            printf("%d ", ar_2D[i][j]);
        }
        printf("\n");
    }
    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}