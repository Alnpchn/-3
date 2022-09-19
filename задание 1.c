#include<stdio.h>
#include<locale.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	int num,A,k;
	puts("введите число", "\n");
	scanf("%d", &num);
	scanf("%d", &k);
	A=num;
	printf("введено число");
	printf("%d", k/num);
}
