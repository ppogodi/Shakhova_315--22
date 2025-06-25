#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED

#include "vacancy.h"

void rec_to_s(char s[100], Vacancy rec);
void show_menu();
int load_vacancys(char* fname, Vacancy vacancys[], int limit);
void echo_print(Vacancy vacancys[], int limit);
void actual_vacancy(Vacancy vacancys[], int limit, const char* fname);

#endif // FUNC_H_INCLUDED
