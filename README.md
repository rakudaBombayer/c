# c


#include <stdio.h>

int main(void)
{

	int n1, n2, n3;

	printf("三つの整数を入力せよ。");

	printf("整数A : ");
	fflush(0);
	scanf("%d", &n1);

	printf("整数B : ");
		fflush(0);
		scanf("%d", &n2);

		printf("整数C : ");
			fflush(0);
			scanf("%d", &n3);


	if (n1 == n2 && n2 == n3)
		printf("3つの値は等しいです。\n");
	else if(n1 == n2 || n2 == n3 || n1 == n3)
		printf("2つの値は等しいです。\n");
	else
		printf("3つの値は異なります。\n");


	return 0;

}


#include <stdio.h>

int main(void)
{

	int month;

	printf("何月ですか？ : ");
	fflush(0);
	scanf("%d", &month);

	switch (month) {
		case 1 :
		case 2 :
		case 3 : printf("%dは冬", month); break;

		case 4 :
		case 5 :
		case 6 : printf("%dは春", month); break;

		case 7 :
		case 8 :
		case 9 : printf("%dは夏", month); break;

		case 10 :
		case 11 :
		case 12 : printf("%dは秋", month); break;

		default : printf("その季節はございません。");
	}

	return 0;

}






