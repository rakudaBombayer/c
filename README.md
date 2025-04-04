# c


#include <stdio.h>

int main(void)
{

	int n1, n2, n3;

	printf("三つの整数を入力せよ。");

	printf("整数A : ");
	fflush(0);
	scanf("%d", &n1);

	printf("整数B : ");
		fflush(0);
		scanf("%d", &n2);

		printf("整数C : ");
			fflush(0);
			scanf("%d", &n3);


	if (n1 == n2 && n2 == n3)
		printf("3つの値は等しいです。\n");
	else if(n1 == n2 || n2 == n3 || n1 == n3)
		printf("2つの値は等しいです。\n");
	else
		printf("3つの値は異なります。\n");


	return 0;

}
