#include	<stdio.h>

#define NUMBER 9

void kinshu(int amount, const int v[], int w[])
{
	int i = 0;
	while (amount > 0) {
		w[i] = amount / v[i];  	// 金種ごとの枚数計算
		amount %= v[i];			// 余りを次の金種計算に使用
		i++;
	}
}

int main(void)
{
	int v[NUMBER] =
			{10000, 5000, 1000, 500, 100, 50, 10, 5, 1};	// 金種の配列
	int w[NUMBER] = {0};			// 金種毎に分解した配列

	int amount;						// 入力した金額
	printf("金額を入力：");
	fflush(0);	scanf("%d", &amount);

	puts("金種に分解します。");
	kinshu(amount, v, w);

	for(int i = 0; i < NUMBER; i++){
		printf("%5d円：%d枚\n", v[i], w[i]);
	}

	return 0;
}
