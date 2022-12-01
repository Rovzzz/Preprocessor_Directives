#pragma once
#ifndef  USERHEADERFILE_H_INCLUDED
#define  USERHEADERFILE_H_INCLUDED
#define POW(x) x*x
#define PI 3,1415926535

#include <stdio.h>
#include <locale.h>
#include <math.h>

int plus(int a, int b)
{
	int c = a + b;
	return c;
}
int minus(int a, int b)
{
	int c = a - b;
	return c;
}
int multiplication(int a, int b)
{
	int c = a * b;
	return c;
}
int division(int a, int b)
{
	int c = a / b;
	return c;
}
char* concaten(const char* str1, const char* str2)
{
	int i = 0, j = 0;
	char* result = malloc(strlen(str1) + strlen(str2) + 1); // �������� ����� ��� �������� ������������
	while (*str1) {
		result[i++] = *str1++; // ��������� ������ i �������� � "str1" ���� ���
	}
	while (*str2) {
		result[i + j++] = *str2++; // ��������� ������ i �������� � "str1" ���� ���
	}
	result[i + j] = '\0'; // �������� ����������� ����-������������
	return result;
}
int number_string(int number)
{
	char str[50];
	sprintf(str, "%d", number);
	printf("%s", &str);
}
int string_number(char str)
{
	int i;
	char c[50] = ("123");
	i = atoi(c);
	printf("\n%d", i);
}
int checkTriangle(int x1, int y1, int x2, int y2, int x3, int y3) {
	float P, S;

#ifdef  POW
	int a = sqrt(POW((x1 - y1 + x2 - y2)));
	int b = sqrt(POW((x2 - y2 + x3 - y3)));
	int c = sqrt(POW((x3 - y3 + x1 - y1)));
#endif

	if (!((a + b) > c && (a + c) > b && (b + c) > a)) {
		printf("������ ������������ �� ����������\n");
		return 1;
	}
	else
	{
#if PI == 3,1415926535
		printf("\n�������� �������������\n");
		P = (a + b + c) / 2;
		S = sqrt(PI * (PI - a) * (PI - b) * (PI - c));
		printf("�������: %f\n��������: %f", S, P);
#elif PI== 3,14
		printf("PI = 3,14");
#else 
		printf("PI is undefined");
#endif

	}
}
#endif // USERHEADERFILE_H_INCLUDED
