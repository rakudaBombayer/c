#include <stdio.h>

#define sqr(x) ((x) * (x))





int main(void)
{
	int n;
	double x;

	printf("整数を入力せよ");
	fflush(0);
	scanf("%d", &n);

	printf("その数の2乗は%dです。\n", sqr(n));
	fflush(0);

	printf("実数を入力せよ");
	fflush(0);
	scanf("%lf", &x);

	printf("その数の２乗は%fです。\n", sqr(x));

	return 0;

}
