
#include <stdio.h>


int mini(int a, int b)
{
	if (a > b){
		return b;
	}
	else{
		return a;
	}

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

	printf("小さいほうの値は%dです。\n", mini(n1, n2));


	return 0;

}
