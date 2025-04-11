
#include <stdio.h>


int max3(int a, int b, int c)
{
	int max = a;
	if(b > max) max = b;
	if(c > max) max = c;

	return max;
}


int main(void)
{
	int n1, n2, n3;

	puts("2つの整数を入力せよ");

	printf("整数１　： ");
	fflush(0);
	scanf("%d", &n1);

	printf("整数２　： ");
	fflush(0);
	scanf("%d", &n2);

	printf("整数２　： ");
	fflush(0);
	scanf("%d", &n3);

	printf("大きいほうの値は%dです。\n", max3(n1, n2, n3));


	return 0;

}
