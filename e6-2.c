
#include <stdio.h>


int mini(int a, int b, int c)
{
	int mini = a;
	if (b < mini) mini = b;
	if (c < mini) mini = c;

	return mini;

}


int main(void)
{
	int n1, n2, n3;

	puts("3つの整数を入力せよ");

	printf("整数１　： ");
	fflush(0);
	scanf("%d", &n1);

	printf("整数２　： ");
	fflush(0);
	scanf("%d", &n2)

	;printf("整数３　： ");
	fflush(0);
	scanf("%d", &n3);

	printf("小さいほうの値は%dです。\n", mini(n1, n2, n3));


	return 0;

}
