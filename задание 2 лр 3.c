#include<stdio.h>
#include<locale.h>
#define D 2.54
#define H 2.32166
void main(void)
{
	setlocale(LC_ALL, "RUS");
	int dym, pulgada;
	float result;
	puts("введите расстояние в дюймах");
	scanf("%d", &dym);
	result = D * dym;
	printf("%d дюймов-это%.1f см", dym, result);
        puts("введите расстояние в дюймах")
	scanf("%d", &pulgada);
	result = H * pulgada;
	printf("%d дюймов-это %.1f см", pulgada, result);
}
