/*
 * ex5_6.c
 *
 *  Created on: 2023/09/11
 *      Author: kenmuu
 */
#include <stdio.h>

#define NUMBER 10		// データ数の上限

int main(void)
{
	int seito[][2] = { {91, 63}, {67, 72}, {89,34}, {32, 54}, {32, 40}, {50, 70} };

	int sum[6][2];


	for(int i = 0; i < 6; i++){
		sum[i][2] = seito[i][0] + seito[i][1];
	}


	puts("国語");
	for(int i = 0; i < 6; i++){
			printf("生徒%dの国語は%4d点です。", i+1,  seito[i][0]);
		puts("");
	}


	puts("数学");
	for(int i = 0; i < 6; i++){
			printf("生徒%dの数学は%4d点です。", i+1,  seito[0][i]);
		puts("");
	}


	puts("合計点");
	for(int i = 0; i < 6; i++){
		printf("生徒%dは合計%4d点", i+1, sum[i][2]);
		puts("");
	}

	return 0;

}
