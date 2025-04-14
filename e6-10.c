#include <stdio.h>




void intary_rcpy(int v1[], const int v2[], int n)
{
	for (int i = 0; i < n; i++){
		v1[n - 1 - i] = v2[i];
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
