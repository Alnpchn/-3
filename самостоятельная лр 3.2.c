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
	puts("������� �������� �������������");
	scanf("%d", &R);
	I = name(R);
	printf("��� ������������� %d �� ���� ������� ����� %.1f �", R, I);

}