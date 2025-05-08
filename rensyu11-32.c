#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 大文字小文字を区別しない文字列比較関数
int strcasecmp_custom(const char *s1, const char *s2) {
    while (*s1 && *s2) {
        int ch1 = tolower((unsigned char)*s1);
        int ch2 = tolower((unsigned char)*s2);
        if (ch1 != ch2) {
            return ch1 - ch2;
        }
        s1++;
        s2++;
    }
    return (*s1) - (*s2);
}

// 名前の配列をソートする関数（ポインタの配列を使用）
void sort_names(const char* names[][2], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            int cmp = strcasecmp_custom(names[i][0], names[j][0]);
            if (cmp > 0 || (cmp == 0 && strcasecmp_custom(names[i][1], names[j][1]) > 0)) {
                // ポインタの交換
                const char* temp0 = names[i][0];
                const char* temp1 = names[i][1];
                names[i][0] = names[j][0];
                names[i][1] = names[j][1];
                names[j][0] = temp0;
                names[j][1] = temp1;
            }
        }
    }
}

int main(void) {
    // ポインタの配列による名前リスト
    const char* names[][2] = {
        {"Matuda", "Taro"},
        {"YAMADA", "HANAKO"},
        {"yamamoto", "emiko"},
        {"MURAKAMI", "KOJI"},
        {"yamada", "eri"},
        {"Nakamura", "Yuki"},
        {"aoi", "mika"},
        {"HONDA", "TAKESHI"},
    };
    int size = sizeof(names) / sizeof(names[0]);

    // ソート前の名前を表示
    printf("ソート前:\n");
    for (int i = 0; i < size; i++) {
        printf("%s %s\n", names[i][0], names[i][1]);
    }

    // 名前をソート
    sort_names(names, size);

    // ソート後の名前を表示
    printf("\n昇順ソート後:\n");
    for (int i = 0; i < size; i++) {
        printf("%s %s\n", names[i][0], names[i][1]);
    }

    // 降順でソートされた名前を表示
    printf("\n降順ソート後:\n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%s %s\n", names[i][0], names[i][1]);
    }

    return 0;
}
