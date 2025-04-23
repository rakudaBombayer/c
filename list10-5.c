#include <stdio.h>

void set999(int *p)
{
	*p = 999;
}




int main(void)
{
	int x = 123;
	int y = 456;
	int sw;


	printf("x = %d\n", x);
	fflush(0);
	printf("y = %d\n", y);
	fflush(0);

	printf("変更するのは0 or 1");
	fflush(0);
	scanf("%d", &sw);


	if(sw == 0)
		set999(&x);
	else
		set999(&y);


	printf("x = %d\n", x);
	printf("y = %d\n", y);


	return 0;


}
