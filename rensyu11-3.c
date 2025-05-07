#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 大文字小文字を区別しない文字列比較関数
int strcasecmp_custom(const char *s1, const char *s2) {
    while (*s1 && *s2) {
        int ch1 = tolower((unsigned char)*s1); // キャストしてtolowerに渡す
        int ch2 = tolower((unsigned char)*s2); // キャストしてtolowerに渡す
        if (ch1 != ch2) {
            return ch1 - ch2;
        }
        s1++;
        s2++;
    }
    // 片方の文字列が終わった場合も比較
    if (*s1) return 1;
    if (*s2) return -1;
    return 0;
}

// 名前の配列をソートする関数
void sort_names(char name[][2][128], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            // 姓を比較する
            int cmp = strcasecmp_custom(name[i][0], name[j][0]);
            if (cmp > 0) {
                // 姓が異なる場合は、名前全体を入れ替える
                char temp[2][128];
                strcpy(temp[0], name[i][0]);
                strcpy(temp[1], name[i][1]);
                strcpy(name[i][0], name[j][0]);
                strcpy(name[i][1], name[j][1]);
                strcpy(name[j][0], temp[0]);
                strcpy(name[j][1], temp[1]);
            } else if (cmp == 0) {
                // 姓が同じ場合は、名を比較する
                if (strcasecmp_custom(name[i][1], name[j][1]) > 0) {
                    // 名が異なる場合は、名前全体を入れ替える
                    char temp[2][128];
                    strcpy(temp[0], name[i][0]);
                    strcpy(temp[1], name[i][1]);
                    strcpy(name[i][0], name[j][0]);
                    strcpy(name[i][1], name[j][1]);
                    strcpy(name[j][0], temp[0]);
                    strcpy(name[j][1], temp[1]);
                }
            }
        }
    }
}

int main(void) {
    // テスト用の名前配列
    char name[][2][128] = {
        {"Matuda", "Taro"},
        {"YAMADA", "HANAKO"},
        {"yamamoto", "emiko"},
        {"MURAKAMI", "KOJI"},
        {"yamada", "eri"},
        {"Nakamura", "Yuki"},
        {"aoi", "mika"},
        {"HONDA", "TAKESHI"},
    };
    int size = sizeof(name) / sizeof(name[0]); // 名前の数を計算

    // ソート前の名前を表示
    printf("ソート前:\n");
    for (int i = 0; i < size; i++) {
        printf("%s %s\n", name[i][0], name[i][1]);
    }

    // 名前をソート
    sort_names(name, size);

    // ソート後の名前を表示
    printf("\nソート後:\n");
    for (int i = 0; i < size; i++) {
        printf("%s %s\n", name[i][0], name[i][1]);
    }

    return 0;
}
