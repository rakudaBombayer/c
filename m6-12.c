#include <stdio.h>

int isOk(int a, int b, int c){

	int x = a + b + c;

	if (x <= 180){

		return 1;
	}
	return 0;

}

int ryokin(int a, int b, int c, int w){

	int x = a + b + c;

	if (x <= 90 && w <= 5){
		return 500;
	} else if(x <= 90 && w <= 10){
		return 1000;
	}else if(x <= 90 && w >= 10){
		return 1500;
	}else if(x <= 180 && w <= 5){
		return 1000;
	}else if(x <= 180 && w <= 10){
		return 2000;
	}

	return 3000;

}




int main(void)
{
	int x, y, z, w;

	printf("1ペンの長さを入力 : ");
	fflush(0);
	scanf("%d", &x);

	printf("2ペンの長さを入力 : ");
	fflush(0);
	scanf("%d", &y);

	printf("3ペンの長さを入力 : ");
	fflush(0);
	scanf("%d", &z)	;

	printf("重さを入力 : ");
	fflush(0);
	scanf("%d", &w)	;

	int size = isOk(x, y, z);
	if(size == 0)
		printf("サイズオーバーで配達できません。");


	printf("料金は%d円です。。", ryokin(x, y, z, w));



	return 0;

}
