/*String8. Дано целое число N (> 0) и символ C. 
Вывести строку длины N, которая состоит из символов C.*/

#include <stdio.h> 

int main(){
    char c, string[100];
    int n;
    scanf("%d %c", &n, &c);
    for (int i = 0; i < n; i++) {
        string[i] = c;
        }
    string[n] = '\0';
    printf("%s", string);
    return 0;
}
