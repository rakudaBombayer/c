// Ex0910.c

#include <stdio.h>

void del_digit(char s[])
{
    int i = 0;
    while (s[i]) {
        if (s[i] >= '0' && s[i] <= '9') {
            s[i] = '\0';
            putchar(s[i++]);
        } else {
            putchar(s[i++]);
        }

    }
    putchar('\n');
}

int main(void)
{
    char str[128];

    printf("文字列を入力せよ：");
    fflush(0);
    scanf("%s", str);

    printf("数字のみを除去しました。＝");
    fflush(0);
    del_digit(str);

    return 0;
}
