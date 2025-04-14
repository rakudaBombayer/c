#include <stdio.h>



void rev_intary(int v1[],int n)
{
	for(int i = 0; i < n / 2; i++){
		int t = v[i];
		v[i] = x[n -1 - i];
		xx[n -1 - i] = t;
	}

}




int main(void)
{
	int x[7];

	for(int i = 0; i < 7; i++){
		printf("x[%d] : ", i);
		fflush(0);
		scanf("%d", &x[i]);

	}

	for(int i = 0; i < 3; i++){
		int t = x[i];
		x[i] = x[6 - i];
		x[6 - i] = t;
	}

	puts("反転しました。");

	for(int i = 0; i < 7; i++){
			printf("x[%d] : ", i, x[i]);
			fflush(0);

	}

	return 0;

}
