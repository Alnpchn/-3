#include<stdio.h>
#include <locale.h>
#define U 400

void main(void)
{
	setlocale(LC_ALL, "RUS");
	int R;
	float I;
	puts("введите значение сопротивления");
	scanf("%d", &R);
	I = U / R;
	printf("при сопротивлении %d Ом сила тока равна %.1f А", R, I);

}