#include<stdio.h>
#include <locale.h>
float name(float U, float R)
{
	float result = U/R;
	return result;
}
int main(void)
{
	setlocale(LC_ALL, "RUS");
	float U, R, I;
	puts("введите значение напряжения");
	scanf("%f", &U);
	puts("введите значение сопротивления");
	scanf("%f", &R);
	I= name(U, R);
	printf("сила тока равна %lf", I);
	return 0;
}
