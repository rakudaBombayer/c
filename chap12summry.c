#include <stdio.h>

#define NAME_LEN  128




struct Date {
	int y;
	int m;
	int d;

};


typedef struct {
	char name[NAME_LEN];
	struct Date birthday;
} Human;


void print_Human(const Human *h)
{
	printf("%s   (%04d年%02d月%02d日生まれ)   \n",
			h->name, h->birthday.y, h->birthday.m, h->birthday.d);

}



int main(void)
{

	struct Date today;

	Human member[] = {
			{"古賀政男", {1904, 11, 18}},
			{"柴田望洋", {1963, 11, 18}},
			{"岡田准一", {1980, 11, 18}},
	};


	printf("今日の日付を入力せよ。 \n");
	fflush(0);

	printf("年 :");
	fflush(0);
	scanf("%d", &today.y);

	printf("月 :");
	fflush(0);
	scanf("%d", &today.m);

	printf("日 :");
	fflush(0);
	scanf("%d", &today.d);


	printf("今日は%d年%d月%d日ですね。\n", today.y, today.m, today.d);


	printf("--会員一覧表 ---");
	for (int i = 0; i < sizeof(member) /sizeof(member[0]); i++)
		print_Human(&member[i]);



	return 0;
}
