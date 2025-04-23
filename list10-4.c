#include <stdio.h>



int main(void)
{
	int x = 123;
	int y = 456;
	int sw;

	printf("x = %d\n", x);
	fflush(0);
	printf("y = %d\n", y);
	fflush(0);

	printf("変更するのは [0...x/1...y]");
	fflush(0);
	scanf("%d", &sw);


	int *p;
	if (sw == 0)
		p = &x;
	else
		p = &y;


	*p = 999;

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	return 0;

}
