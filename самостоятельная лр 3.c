#include<stdio.h>
#include <locale.h>
#define U 400

void main(void)
{
	setlocale(LC_ALL, "RUS");
	int R;
	float I;
	puts("������� �������� �������������");
	scanf("%d", &R);
	I = U / R;
	printf("��� ������������� %d �� ���� ���� ����� %.1f �", R, I);

}