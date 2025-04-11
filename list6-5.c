
#include <stdio.h>


double power(double x, int n){
	double tmp = 1.0;

	for (int i = i; i <= n; i++){
		tmp *= x;
	}

	return tmp;
}


int main(void)
{
	double a;
	int b;

	printf("aのb乗を求めます。\n");

	printf("実数a");
	fflush(0);
	scanf("%lf", &a);


	printf("実数b");
	fflush(0);
	scanf("%d", &b);

	printf("%.2fの%d乗は%.2fです。\n", a, b, power(a, b));
	fflush(0);

	return 0 ;
}
