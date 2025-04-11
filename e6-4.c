
#include <stdio.h>


int sql(int x){

	return x * x;

}


int main(void)
{
	int n1;

	puts("整数を入力せよ");

	printf("整数１　： ");
	fflush(0);
	scanf("%d", &n1);


	printf("大きいほうの値は%dです。\n",sql(sql(n1)) );


	return 0;

}
