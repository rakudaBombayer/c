#include <stdio.h>

#define NUMBER 5


int max_of(int v[], int n)
{

	int max = v[0];

	for (int i = 1; i < n; i++)
		if (v[i] > max)
			max = v[i];

	return max;

}

int min_of(const int h[], int n){


	int min = h[0];

	for (int i = 1; i < n; i++)
		if (h[i] < min)
			min = h[i];

	return min;

}





int main(void)
{
	int eng[NUMBER];
	int mat[NUMBER];

	printf("%d人の点数を入力せよ。\n", NUMBER);
	for (int i = 0; i < NUMBER; i++){
		printf("[%d] 英語：", i +1);
		fflush(0);
		scanf("%d", &eng[i]);

		printf("   数学 :");
		fflush(0);
		scanf("%d", &mat[i]);

	}

	int max_e = min_of(eng, NUMBER);
	int max_m = min_of(mat, NUMBER);

	printf("英語の最低点=%d\n", max_e);
	printf("英語の最低点=%d\n", max_m);

	return 0;
}
