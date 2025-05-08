#include <stdio.h>

struct xyz {
    char x[64];  // 配列を char に変更
    long y;
    double z;
};

struct xyz xyz_of() {
    struct xyz temp;

    printf("氏名 :");
    fflush(0);
    scanf("%s", temp.x);  // 安全な入力処理

    printf("身長 :");
    fflush(0);
    scanf("%ld", &temp.y);

    printf("体重 :");
    fflush(0);
    scanf("%lf", &temp.z);

    return temp;
}

int main(void) {
    struct xyz s = xyz_of();  // 正しい構造体変数の宣言

    printf("\n入力された情報:\n");
    printf("氏名: %s\n", s.x);
    printf("身長: %ld\n", s.y);
    printf("体重: %.2f\n", s.z);  // 小数点以下2桁まで表示

    return 0;
}
