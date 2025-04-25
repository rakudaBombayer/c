#include <stdio.h>
#include <string.h>

void str_toupper_ptr(char *s) {
    while (*s != '\0') {
        *s = toupper(*s);
        s++;
    }
}


void str_tolower_ptr(char *s) {
    while (*s != '\0') {
        *s = tolower(*s);
        s++;
    }
}

int main(void)
{
	char str[128];


	printf("文字列を入力せよ :");
	fflush(0);
	scanf("%s", str);

	str_toupper_ptr(str);
	printf("大文字 :  %s\n", str);
	fflush(0);

	str_tolower_ptr(str);
	printf("小文字 :  %s\n", str);
	fflush(0);

}
