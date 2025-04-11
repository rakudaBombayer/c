/*
 * ex5_11.c
 *
 *  Created on: 2023/09/12
 *      Author: kenmuu
 */
#include	<stdio.h>

#define STUDENT 6		// 学生の人数
#define SUBJECT 2		// 科目数

int main(void)
{
/*
	// 学生ごとの国語と数学の点数
	int tensu[STUDENT][SUBJECT] = {
		{70, 60}, {71, 61}, {72, 62}, {73, 63}, {74, 64}, {75, 65}
	};
*/
	// 点数の読み込み
	int tensu[STUDENT][SUBJECT];
	for (int i = 0; i < STUDENT; i++) {
		printf("%2d人目【", i + 1);
		for (int j = 0; j < SUBJECT; j++) {
			if (j == 0) {
				printf("国語】：");
			} else {
				printf("　　　【数学】：");
			}
			fflush(0);	scanf("%d", &tensu[i][j]);
		}
	}

	// 学生ごとの科目の点数と合計点と平均点を表示
	putchar('\n');
	puts("|       | 国語 | 数学 | 合計 | 平 均 |");
	puts("|-------|------|------|------|-------|");
	for (int i = 0; i < STUDENT; i++) {
		printf("|%2d人目 | ", i + 1);
		int sum = 0;
		for (int j = 0; j < SUBJECT; j++) {
			printf("%4d | ", tensu[i][j]);
			sum += tensu[i][j];
		}
		printf("%4d | %5.1f |\n", sum, (double)sum / SUBJECT);
	}

	// 科目ごとの合計点と平均点を表示
	puts("|=======|======|======|======|=======|");
	printf("|  合計 | ");
	int total[SUBJECT] = {0, 0};
	for (int i = 0; i < SUBJECT; i++) {
		for (int j = 0; j < STUDENT; j++) {
			total[i] += tensu[j][i];
		}
		printf("%4d | ", total[i]);
	}
	putchar('\n');
	printf("|  平均 |%5.1f |%5.1f |\n", (double)total[0] / STUDENT, (double)total[1] / STUDENT);

	return 0;
}

