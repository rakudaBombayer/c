#include <stdio.h>

int main(void)
{

	int month;

	printf("整数A : ");
	fflush(0);
	scanf("%d", &month);

	switch (month) {
		case 1 :
		case 2 :
		case 3 : puts("冬"); break;

		case 4 :
		case 5 :
		case 6 : puts("春"); break;

		case 7 :
		case 8 :
		case 9 : puts("夏"); break;

		case 10 :
		case 11 :
		case 12 : puts("冬"); break;

		default : puts("その季節はございません。");
	}

	return 0;

}


