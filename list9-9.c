#include <stdio.h>

void put_string(const char s[])
{

	int i = 0;
	while(s[i])
		putchar(s[i++]);

}


int main(void)
{
	char str[128];

	printf("文字列を入力せよ : ");
	fflush(0);
	scanf("%s", str);


	printf("あなたは");
	fflush(0);
	put_string(str);
	printf("と入力しました。\n");
	fflush(0);


	return 0;


}
