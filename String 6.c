/*String 6. Дан символ C, изображающий цифру или букву 
(латинскую или русскую). Если C изображает цифру, 
то вывести строку «digit», если латинскую букву — 
вывести строку «lat», если русскую — вывести строку «rus».*/

#include <stdio.h> 
#include <wchar.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "");
    wchar_t C;
    wscanf(L"%lc", &C);
    if (C >= L'0' && C <= L'9') { 
        wprintf(L"digit\n");
        }
    else if ((C >= L'A' && C <= L'Z') || (C >= L'a' && C <= L'z')) { 
        wprintf(L"lat\n");
        }
    /*else if ((C >= L'А' && C <= L'Я') || (C >= L'а' && C <= L'я')) { 
        wprintf(L"rus\n");
        }*/
    
    return 0;
}
