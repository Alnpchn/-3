#include<stdio.h>
#include<locale.h>
#include<math.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	float c1, d1;
	double c2, d2;
	long double c3, d3;

	
	d1 = modff(34.24, &c1);
	d2 = modf(34.24, &c2);
	d3 = modfl(34.24, &c3);

	printf("аргумент: 34.24\n");
	printf("modff: целая часть %.1f\n, дробная часть %f", c1, d1);
	puts("______________________________________________________");
	printf("modf: целая часть %.1f\n, дробная часть %f", c2, d2);
	puts("______________________________________________________");
	printf("modfl: целая часть %.1f\n, дробная часть %f", c3, d3);
}
