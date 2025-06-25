#ifndef VACANCY_H_INCLUDED
#define VACANCY_H_INCLUDED

#include "date.h"

typedef struct _vacancy {
    Date date;
    char position[40];
    int salary;
    char relevance; // '�' - ��, '�' - ���
} Vacancy;

#endif // VACANCY_H_INCLUDED