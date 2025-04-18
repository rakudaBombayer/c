#include <stdio.h>

int main() {
    int count = 0;
    int c;

    printf("文字を入力してください。\n");
    fflush(0);

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            count++;
        }
    }

    printf("行数: %d\n", count);

    return 0;
}
