#include<stdio.h>
#include<locale.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	int a, b, res1, res2, res3;
	puts("введите значение a");
	scanf("%d", & a);
	puts("введите значение b");
	scanf("%d", & b);
	res1 = a * b;
	res2 = a + b;
	res3 = a - b;
		printf(" _______________________________\n");
		printf("|    a*b    |   a+b   |   a-b   |\n");
		printf("|   %d*%d     |  %d+%d    |  %d-%d    |\n", a, b, a, b, a, b);
		printf("|     %d    |    %d   |    %d    |\n",res1, res2, res3);
		printf("|_______________________________|\n");

}