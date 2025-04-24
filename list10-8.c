#include <stdio.h>


void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}


void sort2(int *n1, int *n2)
{
	if (*n1 > *n2)
		swap(n1, n2);
}



int main(void)
{
	int a, b;

	puts("二つの整数を入力せよ。");
	printf("整数A");
	fflush(0);
	scanf("%d", &a);

	printf("整数B");
	fflush(0);
	scanf("%d", &b);

	sort2(&a, &b);

	puts("昇順にソートしました。");
	printf("整数Aは%dです。\n", a);
	printf("整数Bは%dです。\n", b);


	return 0;

}
