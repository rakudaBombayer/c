#include <stdio.h>
#include <string.h>


int main(void)
{
	char str[128];

	printf("文字列 : ");
	fflush(0);
	scanf("%s", str);


	printf("文字列\"%s\の長さは%zuです。", str, strlen(str));

	return 0;

}
