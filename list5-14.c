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
	int a[5];
	int b[5];

	for (int i = 0; i < 5; i++){
		printf("a[%d] : ", i);
		fflush(0);
		scanf("%d", &a[i]);
	}

	int count = 0;
	for (int i = 0; i < 5; i++)
		if(a[i] > 0)
			b[count++] = a[i];

	for (int i = 0; i < count; i++)
		printf("b[%d] = %d\n", i, b[i]);
		fflush(0);

	return 0;
}
