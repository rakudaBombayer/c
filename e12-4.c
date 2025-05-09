#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 64

typedef struct {
    char name[NAME_LEN];
    int height;
    double weight;
} Student;

void swap_Student(Student *x, Student *y) {
    Student temp = *x;
    *x = *y;
    *y = temp;
}

void sort_by_height(Student a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (a[j - 1].height > a[j].height) {
                swap_Student(&a[j - 1], &a[j]);
            }
        }
    }
}

int main(void) {
    int num;
    printf("学生の人数を入力してください: ");
    fflush(stdout);
    scanf("%d", &num);

    // メモリ確保
    Student *students = malloc(num * sizeof(Student));
    if (students == NULL) {
        printf("メモリの確保に失敗しました。\n");
        return 1;
    }

    // 学生の情報を入力
    for (int i = 0; i < num; i++) {
        printf("\n学生%dの情報を入力してください。\n", i + 1);
        fflush(stdout);

        printf("名前: ");
        fflush(stdout);
        scanf("%s", students[i].name);

        printf("身長(cm): ");
        fflush(stdout);
        scanf("%d", &students[i].height);

        printf("体重(kg): ");
        fflush(stdout);
        scanf("%lf", &students[i].weight);
    }

    // 学生の情報を表示
    printf("\n入力された学生情報:\n");
    for (int i = 0; i < num; i++) {
        printf("%-8s %6d %6.1f\n", students[i].name, students[i].height, students[i].weight);
    }

    // ソート
    sort_by_height(students, num);
    printf("\n身長順にソートしました。\n");

    // ソート後の情報を表示
    for (int i = 0; i < num; i++) {
        printf("%-8s %6d %6.1f\n", students[i].name, students[i].height, students[i].weight);
    }

    // メモリ解放
    free(students);

    return 0;
}
