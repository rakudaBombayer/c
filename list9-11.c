#include <ctype.h>
#include <stdio.h>


void str_toupper(char s[])
{
	int i =0;
	while (s[i]){
		s[i] = toupper(s[i]);
		i++;
	}
}


void str_tolower(char s[])
{
	int i = 0;
	while (s[i]){
		s[i] = tolower(s[i]);
		i++;
	}
}

int main(void)
{
	char str[128];


	printf("文字列を入力せよ :");
	fflush(0);
	scanf("%s", str);

	str_toupper(str);
	printf("大文字 :  %s\n", str);
	fflush(0);

	str_tolower(str);
	printf("小文字 :  %s\n", str);
	fflush(0);







}
