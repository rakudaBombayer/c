#include <stdio.h>

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;

}



int main(void)
{

	int a, b;


	puts("二つの整数を入力せよ");


	printf("整数Aを入力せよ : ");
	fflush(0);
	scanf("%d", &a);

	printf("整数Bを入力せよ : ");
	fflush(0);
	scanf("%d", &b);


	swap(&a, &b);


	puts("これらの値を交換しました。");
	printf("整数Aは%dです。 : ", a);
	fflush(0);

	printf("整数Bは%dです。 : ", b);
	fflush(0);


	return 0;


}
