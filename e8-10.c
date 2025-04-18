// Ex0810.c
#include <stdio.h>

int main(void)
{
    int i, j, ch;
    int cnt[10] = { 0 };

    printf("入力してください：");

    do {
        if (ch == '\n') {
            printf("入力してください：");
        }
        if (ch >= '0' && ch <= '9') {
            cnt[ch - '0']++;
        }
     } while ((ch = getchar()) != EOF);

    puts("");
    puts("数学文字の出現回数");

    for (i = 0; i < 10; i++) {
        printf("'%d' : ", i);
        for (j = 0; j < cnt[i]; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}

