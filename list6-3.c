
#include <stdio.h>


int sqr(int n)
{
	return n * n;

}

int diff(int a, int b)
{
	return a > b ? a - b : b - a;

}


int main(void)
{
	int n1, n2;

	puts("2つの整数を入力せよ");

	printf("整数１　： ");
	fflush(0);
	scanf("%d", &n1);

	printf("整数２　： ");
	fflush(0);
	scanf("%d", &n2);


	printf("xの２乗はｙの２乗の差は%dです。\n", diff(sqr(n1), sqr(n2)) );


	return 0;

}
