#include<stdio.h>
#include<locale.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	int num, A, k;
	puts("������� �����", "\n");
	scanf("%d", &num);
	A = num;
	puts("������� ����� A");
	puts("������� ����� B");
	scanf("%d", &k);
	puts("������� ����� B");

	printf("A+B=%=%d\n", k + num);
	printf("A-B=%=%d\n", num - k);
	printf("A*B=%=%d\n", k * num);
	printf("������� B/A %=%d\n", k / num);
	printf("������� B/A=%=%d\n", k % num);
}