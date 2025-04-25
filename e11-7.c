#include <stdio.h>
#include <string.h>


void put_string_ptr(const char *s) {
    while (*s != '\0') {
        putchar(*s);
        s++;
    }
}



int main(void)
{
	char str[128];

	printf("文字列を入力せよ。 : ");
	fflush(0);
	scanf("%s", str);


	put_string_ptr(str);


	printf("整数に変換すると%sです。", str);

	return 0;
}
