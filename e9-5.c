// Ex0905.c

#include <stdio.h>
#define NUMBER 128

int str_char(const char s[], int c)
{
    int len = 0;

    while (s[len])
        len++;

    for (int i = 0; i < len; i++) {
        if (s[i] == c) {
            return i + 1;
            break;
        }
    }

    return -1;
}

int main(void)
{
    char str[NUMBER];
    char c;

    printf("文字列を入力せよ：");
    scanf("%s", str);

    printf("探す文字を入力せよ：");
    scanf("\n%c", &c);

    printf("文字列 \"%s\" の中に、%c は %d 文字目にあります。\n", str, c, str_char(str, c));

    return 0;
}
