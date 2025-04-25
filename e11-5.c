#include <stdio.h>
#include <string.h>


char my_strcat(char *dest, const char *src) {
    char *ptr = dest;

    // dest の末尾まで移動
    while (*ptr != '\0') {
        ptr++;
    }

    // src の各文字を dest の末尾にコピー
    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }

    // 新しい終端文字を追加
    *ptr = '\0';

    return dest;
}

char my_strncat(char *dest, const char *src, size_t n) {
    char *ptr = dest;
    size_t dest_len = 0;
    size_t i;

    // dest の長さを調べる
    while (*ptr != '\0') {
        ptr++;
        dest_len++;
    }

    // src から最大 n 文字を dest の末尾にコピー
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[dest_len + i] = src[i];
    }

    // 新しい終端文字を追加 (n 文字コピーした場合でも必ず追加)
    dest[dest_len + i] = '\0';

    return dest;
}



int main(void)
{
	char s1[10];
	char *x = "ABC";

	strcpy(s1, x);
	my_strcat(s1, "DEFG");
	printf("s1 = \"%s\"\n", s1);
	fflush(0);

	strcpy(s1, x);
	my_strncat(s1, "12345", 3);
	printf("s1 = \"%s\"\n", s1);
	fflush(0);

	strcpy(s1, x);
	my_strncat(s1, "12345", 5);
	printf("s1 = \"%s\"\n", s1);
	fflush(0);

	strcpy(s1, x);
	my_strncat(s1, "12345", 7);
	printf("s1 = \"%s\"\n", s1);
	fflush(0);

	return 0;
}
