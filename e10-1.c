#include <stdio.h>

void ajust_point(int *n)
{

	if(*n < 0){
		*n = 0;
	}else if(*n > 100){
		*n = 100;
	}

}



int main(void)
{

	int x;


	printf("x = %d\n", x);
	fflush(0);

	printf("数値を入力せよ");
	fflush(0);
	scanf("%d", &x);


	ajust_point(&x);


	printf("x = %d\n", x);


	return 0;


}
