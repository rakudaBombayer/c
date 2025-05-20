#include <stdio.h>
#include <string.h>

int main() {
    FILE *mockFile;
    char filename[256];  // ファイル名を格納する変数
    char buffer[256];    // 読み込み用のバッファ

    // mock.txt を開く
    mockFile = fopen("mock.txt", "r");
    if (mockFile == NULL) {
        perror("mock.txt を開けませんでした");
        return 1;
    }

    // ***タイトル部分をスキップ***
    if (fgets(buffer, sizeof(buffer), mockFile) == NULL) {
        perror("タイトルの読み込みに失敗しました");
        fclose(mockFile);
        return 1;
    }

    // mock.txt の2行目以降（ファイル名）を取得し、それぞれ開く
    while (fgets(filename, sizeof(filename), mockFile) != NULL) {
        // 改行を削除
        filename[strcspn(filename, "\n")] = '\0';

        // ファイルを開く
        FILE *targetFile = fopen(filename, "r");
        if (targetFile == NULL) {
            perror("ターゲットファイルを開けませんでした");
            continue; // ファイルが開けなかった場合、次のファイルへ
        }

        printf("=== %s の内容 ===\n", filename);

        // ファイルの内容を出力
        while (fgets(buffer, sizeof(buffer), targetFile) != NULL) {
            printf("%s", buffer);
        }

        fclose(targetFile); // 開いたファイルを閉じる
        printf("\n");
    }

    fclose(mockFile); // mock.txt を閉じる

    return 0;
}
