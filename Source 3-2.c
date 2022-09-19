#include<stdio.h>
#include<locale.h>
#define D 2.54
void main(void)
{
	setlocale(LC_ALL, "RUS");
	int dym;
		float result;
	puts("введите расстояние в дюймах");
	scanf("%d", &dym);
	result = D * dym;
	printf("%d дюймов-это %.1f см", dym, result);
}
