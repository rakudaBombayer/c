#include <stdio.h>

#define NUMBER 5



void bsort(int a[], int n)
{
	for (int i = 0; i < n -1; i++){
		for (int j = n -1; j > i; j--){
			if (a[j - 1] > a[j]){
			int temp = a[j]	;
				a[j] = a[j -1];
				a[j - 1] = temp;

			}
		}
	}
}




int main(void)
{
	int height[NUMBER];


	printf("%d人の身長を入力せよ。", NUMBER);
	fflush(0);

	for (int i = 0; i < NUMBER; i++){
		printf("%2d番　: ", i + 1);
		scanf("%d", &height[i]);
	}

	bsort(height, NUMBER);


	puts("昇順にソートしました。");
	for (int i = 0; i < NUMBER; i++)
		printf("%2d番 : %d\n", i +1 ,height[i]);
		fflush(0);

	return 0;

}
