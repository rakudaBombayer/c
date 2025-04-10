#include <stdio.h>

#define NUMBER 120



int main(void)
{
	int num;
	int tensu[NUMBER];
	int bunpu[11] = {0};

	printf("人数を入力せよ : ");
	fflush(0);

	do {
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("\a1~%dで入力せよ : ", NUMBER);
			fflush(0);
	} while (num < 1 || num > NUMBER);

	printf("%d人の点数を入力せよ. \n", num);
	fflush(0);

	for (int i = 0; i  < num; i++){
		printf("%2d番 : ", i + 1);
		fflush(0);
		do {
			scanf("%d", &tensu[i]);
			if(tensu[i] < 0 || tensu[i] > 100)
				printf("\a0 ～ 100で入力せよ : a");
				fflush(0);

		} while (tensu[i] < 0 || tensu[i] > 100);
		bunpu[tensu[i] / 10]++;
		}


	puts("\n---分布グラフ---");
	printf("        100 : ");
	fflush(0);


	for(int j = 0; j < bunpu[10]; j++)
		putchar('*');
	putchar('\n');

	for (int i = 9; i >= 0; i--){
		printf("%3d ~ %3d : ", i * 10, i * 10 +9);
		for (int j =0; j < bunpu[i]; j ++)
			putchar('*');
			fflush(0);
		putchar('\n');
	}



	return 0;
}

