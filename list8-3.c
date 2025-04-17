#include <stdio.h>

#define puts_alert(str) ( putchar('\a') , puts(str))




int main(void)
{
	int n;

	printf("整数を入力せよ");
	fflush(0);
	scanf("%d", &n);


	if (n)
		printf("その数はゼロではありません。");
	else
		puts_alert("その数はゼロです。");



	return 0;

}
