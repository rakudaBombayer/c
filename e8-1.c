#include <stdio.h>

#define diff(x, y) ((x) -(y))





int main(void)
{
	int n, m;

	printf("整数を入力せよ");
	fflush(0);
	scanf("%d", &n);
	scanf("%d", &m);


	printf("その数の差は%dです。\n", diff(n, m));
	fflush(0);



	return 0;

}
