#include <stdio.h>
#include <locale.h>
#include <math.h>
#include "UserHeaderFile.h"

#define POW(x) x*x

#define A 10;
#define B 5;

#define AX 15;
#define AY 10;

#define BX 10;
#define BY 3;

#define CX 25;
#define CY 2;

int main()
{
	int exit = 1;
	while (exit == 1)
	{
		setlocale(LC_ALL, "Rus");
		int select;
		printf_s("\n\n 1 - �������� �����\n 2 - ��������� �����\n 3 - ��������� �����\n 4 - ������� �����\n 5 - ����������� ���� ���������� �� ������ ��������\n 6 - �������������� ����� � ������\n 7 - ������ � �����\n 8 - ���������� ����� �������\n 9 - �������� ������������ �� �����������\n");
		printf("�������� �������: ");
		scanf_s("%d", &select);
		int a = A;
		int b = B;
		float ax = AX ;
		float ay = AY ;

		float bx = BX ;
		float by = BY ;

		float cx = CX;
		float cy = CY;

		char cnumber = "123";
		char* answer = concaten("Hello", "World");
		switch (select)
		{
		case 1:
			printf_s("\na = %d",a);
			printf_s("\nb = %d", b);
			printf_s("\n\n�����: %d", plus(a, b));
			break;
		case 2:
			printf_s("\na = %d", a);
			printf_s("\nb = %d", b);
			printf_s("\n\n�����: %d", minus(a, b));
			break;
		case 3:
			printf_s("\na = %d", a);
			printf_s("\nb = %d", b);
			printf_s("\n\n�����: %d", multiplication(a, b));
			break;
		case 4:
			printf_s("\na = %d", a);
			printf_s("\nb = %d", b);
			printf_s("\n\n�����: %d", division(a, b));
			break;
		case 5:
			printf("\n%s", answer);
			free(answer);
			break;
		case 6:
			printf_s("\n����� ��� �������������� � ������: %d\n",a);
			number_string(a);
			break;
		case 7:
			string_number(cnumber);
			break;
		case 8:
			printf("d = %f\n", sqrt(POW((ax - bx + ay - by))));
			break;
		case 9:
			checkTriangle(ax, ay, bx, by, cx, cy);
			break;
		default:
			printf("\n\n������� ����� ������� ��� ���!\n\n");
			break;
		}
		printf("\n\n�� ������ ����������?\n1-��\n0-���\n");
		scanf_s("%d", &exit);
	}
	return 0;

}
