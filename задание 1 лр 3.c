#include<stdio.h>
#include<locale.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	int num, A, k;
	puts("введите число", "\n");
	scanf("%d", &num);
	A = num;
	puts("введено число A");
	puts("введите число B");
	scanf("%d", &k);
	puts("введено число B");

	printf("A+B=%=%d\n", k + num);
	printf("A-B=%=%d\n", num - k);
	printf("A*B=%=%d\n", k * num);
	printf("частное B/A %=%d\n", k / num);
	printf("остаток от B/A=%=%d\n", k % num);
}
