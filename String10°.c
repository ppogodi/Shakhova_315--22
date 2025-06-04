/*String10°. Дана строка. Вывести строку, 
содержащую те же символы, 
но расположенные в обратном порядке.*/

#include <stdio.h> 
#include <string.h>

int main(){
    char string[] = "Hello";
    int n = strlen(string);
    for (int i = n; i >= 0; i--) {
        printf("%c", string[i]);
        }
    string[n] = '\0';
    return 0;
}