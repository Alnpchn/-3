#include<stdio.h>
#include<locale.h>
#define D 2.54
#define H 2.32166
void main(void)
{
	setlocale(LC_ALL, "RUS");
	int dym, pulgada;
	float result;
	puts("������� ���������� � ������");
	scanf("%d", &dym);
	result = D * dym;
	printf("%d ������-���%.1f ��", dym, result);

	scanf("%d", &pulgada);
	result = H * pulgada;
	printf("%d ������-��� %.1f ��", pulgada, result);
}