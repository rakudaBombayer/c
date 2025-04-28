#include <stdio.h>
#include <string.h>
#include <ctype.h>

void a_toi(char *src) {
	
	
	
}

void atof(char *src) {

	
	
}

int main(void)
{
    char str[128];

    printf("整数値を入力せよ：");
    fflush(0);
    scanf("%s", str);
    
    printf("int型に変換すると%dです。\n", a_toi(str));
    
    putchar('\n');
    printf("実数値を入力 : ");
    fflush(0);
    printf("double型に変換すると%lfです。\n", atof(str));

    return 0;
}
