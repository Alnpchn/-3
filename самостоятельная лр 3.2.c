#include<stdio.h>
#include <locale.h>
#define U 400
int name(int R)
{
	int I;
	I = U / R;
	return R;
}
void main(void)
{
	setlocale(LC_ALL, "RUS");
	int R;
	float I;
	puts("введите значение сопротивления");
	scanf("%d", &R);
	I = name(R);
	printf("при сопротивлении %d Ом сила тяжести равна %.1f А", R, I);

}