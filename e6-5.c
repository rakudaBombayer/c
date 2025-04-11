#include <stdio.h>

int sump(int n){
	int sum = 0;

	for (int i = 1; i <= n; i++) {
		sum += i;
	}

	return sum;
}



int main(void)
{
	int num;

	printf("整数を入力せよ : ");
	fflush(0);
	scanf("%d", &num);



	printf("nの値 : %d\n", num);
	printf("1から%dまでの総和は%dです。", num ,sump(num));

	return 0;

}
