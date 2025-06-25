/*21.� ���� ������ ��������� ��������� �������� �������� � ���������, ������� ��������� ����������: �����������, ���������,  ������� �������� �����������.
��������� �������� ����� in.txt
���� �������������	��������	�����	������������
15.05				������	    40000		�
16.05				�����������	50000		�
16.05				��������	80000		�
...
������������ ������ ���������� ��������, ���������� �� ��������
��������� ��������� ����� out.txt
��������	�����
��������	80000
������	    40000*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "func.h"
#include "vacancy.h"

#define AR_LEN 1000
#define TRUE 1

int main() {
    setlocale(LC_ALL, "");
    int count = 0; // ����������� ���������� ��������� � �������

    Vacancy vacancys[AR_LEN];
    while (TRUE) {
        int item = -1;
        show_menu();
        scanf("%d", &item);
        if (item == 0) {
            /** ����� */
            printf("������� �� ������������� ����� ����������\n");
            getchar();
            break;
        }
        else if (item == 1) {
            /** � ��������� */
            printf("������� ������ ������� ��������� ������ 315��-22\n");
            printf("������� �21. ����: �������� ���������\n");
            getchar();
        }
        else if (item == 2) {
            /** �������� �� ����� */
            count = load_vacancys("in.txt", vacancys, AR_LEN);
            printf("���� �������� � ������\n");
            getchar();
        }
        else if (item == 3) {
            /** ������ ������, ������������ �� �������� ����� */
            echo_print(vacancys, count);
            getchar();
        }
        else if (item == 4) {
            /** ���������� ������� � ���������� ���������� */
            actual_vacancy(vacancys, count, "out.txt");
            printf("��������� �������� � ����� %s\n", "out.txt");
            getchar();
        }
        else {
            /** ��������� ���� */
            printf("������. ������ �� 0 �� 3\n");
            getchar();
        }
    }

    return 0;
}