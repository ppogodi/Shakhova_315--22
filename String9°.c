/*String9°. Дано четное число N (> 0) и символы C1 и C2. 
Вывести строку длины N, которая состоит из 
чередующихся символов C1 и C2, начиная с C1..*/

#include <stdio.h> 

int main(){
    char c1, c2, string[100];
    int n;
    scanf("%d %c %c", &n, &c1, &c2);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            string[i] = c1;
            }
        else if (i % 2 == 1) {
            string[i] = c2;
            }
        }
    string[n] = '\0';
    printf("%s", string);
    return 0;
}