/*String4. Дано целое число N (1 ≤ N ≤ 26). 
Вывести N первых прописных (т. е. заглавных)
букв латинского алфавита..*/

#include <stdio.h> 

int main(){
    int n;
    scanf("%d", &n);
    char letter = 'A';
    for (int i = 0; i < n; i++) {
        printf("%c ", letter + i);
        }
    
    return 0;
}
