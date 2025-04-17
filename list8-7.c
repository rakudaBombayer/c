#include <stdio.h>


int factorial(int n){
	if (n > 0)
		return n * factorial(n - 1);
	else
		return 1;
}



int main(void)
{
	int num;

	printf("整数を入力せよ : ");
	fflush(0);
	scanf("%d", &num);

	printf("%dの階乗は%dです。", num, factorial(num));
	fflush(0);

	return 0;
}
