#include<stdio.h>
#include<locale.h>
#define D 2.54
void main(void)
{
	setlocale(LC_ALL, "RUS");
	int dym;
		float result;
	puts("������� ���������� � ������");
	scanf("%d", &dym);
	result = D * dym;
	printf("%d ������-��� %.1f ��", dym, result);
}
