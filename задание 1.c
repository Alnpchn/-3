#include<stdio.h>
#include<locale.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	int num,A,k;
	puts("������� �����", "\n");
	scanf("%d", &num);
	scanf("%d", &k);
	A=num;
	printf("������� �����");
	printf("%d", k/num);
}
