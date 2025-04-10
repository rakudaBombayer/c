/*
 * ex5_8.c
 *
 *  Created on: 2023/09/11
 *      Author: kenmuu
 */
#include	<stdio.h>

#define NUMBER 120			// 人数の上限

int main(void)
{
	int num;				// 実際の人数
	int tensu[NUMBER];		// 学生の点数
	int bunpu[11] = {0};	// 点数の分布
	int max = 0;			// 分布の中の最大人数

	printf("人数を入力せよ：");

	do {
		fflush(0);	scanf("%d", &num);
		if (num < 1 || num > NUMBER) {
			printf("1～%dで入力してください：", NUMBER);
		}
	} while (num < 1 || num > NUMBER);

	printf("%d人の点数を入力せよ。\n", num);
	for (int i = 0; i < num; i++) {
		printf("%2d番：", i + 1);
		do {
			fflush(0);	scanf("%d", &tensu[i]);
			if (tensu[i] < 0 || tensu[i] > 100) {
				printf("0～100で入力せよ：");
			}
		} while (tensu[i] < 0 || tensu[i] > 100);
		int idx = tensu[i] / 10;
		bunpu[idx]++;
		if (max < bunpu[idx]) {
			max = bunpu[idx];
		}
	}

	puts("\n---分布グラフ---");
	for (int i = max; i > 0; i--) {
		for (int j = 0; j < 11; j++) {
			if (bunpu[j] < i) {
				printf("   ");
			} else {
				printf(" * ");
			}
		}
		printf(" \n");
	}
	for (int i = 0; i < 11; i++) {
		printf("---");
	}
	printf("-\n");

	for (int i = 0; i < 11; i++) {
		printf(" %d", i * 10);
	}
	printf(" \n");

	return 0;
}

