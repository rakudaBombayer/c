#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STUDENTS 100  // 最大生徒数
#define MAX_SUBJECTS 5    // 最大科目数
#define MAX_EXAMS 10      // 最大試験数

// 生徒情報の構造体
typedef struct {
    char id[10];   // 生徒ID
    char name[50]; // 生徒名
} Student;

// 試験成績の構造体
typedef struct {
    char id[10];           // 生徒ID
    char name[50];         // 氏名
    int scores[MAX_SUBJECTS]; // 各科目の点数
    int total;             // 総合点
    int is_error;          // エラーフラグ（1ならエラー）
} ExamResult;

// 生徒情報を読み込む関数
void load_students(const char *filename, Student students[], int *count) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("生徒情報ファイルを開けませんでした");
        return;
    }

    char line[100];
    fgets(line, sizeof(line), file); // タイトルをスキップ

    *count = 0;
    while (fscanf(file, "%s %[^\n]", students[*count].id, students[*count].name) == 2) {
        (*count)++;
    }

    fclose(file);
}

// 試験成績を読み込む関数（エラーデータを識別）
void load_exam_results(const char *filename, ExamResult results[], int *count, int num_subjects, Student students[], int student_count) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("試験成績ファイルを開けませんでした");
        return;
    }

    char line[100];
    fgets(line, sizeof(line), file); // タイトルをスキップ

    *count = 0;
    while (fscanf(file, "%s", results[*count].id) == 1) {
        results[*count].total = 0;
        results[*count].is_error = 0;

        // **生徒情報に存在しない ID のチェック**
        int student_found = 0;
        for (int i = 0; i < student_count; i++) {
            if (strcmp(results[*count].id, students[i].id) == 0) {
                strcpy(results[*count].name, students[i].name);
                student_found = 1;
                break;
            }
        }
        if (!student_found) {
            results[*count].is_error = 1;  // **エラーフラグ ON**
        }

        // **点数の読み込みと異常値チェック**
        for (int i = 0; i < num_subjects; i++) {
            if (fscanf(file, "%d", &results[*count].scores[i]) != 1 || results[*count].scores[i] < 0) {
                results[*count].is_error = 1;  // **不正データを検出**
            }
            results[*count].total += results[*count].scores[i];
        }

        // **異常な総合点のチェック**
        if (results[*count].total > (num_subjects * 100) || results[*count].total < 0) {
            results[*count].is_error = 1;
        }

        (*count)++;
    }

    fclose(file);
}

// ランキング用の比較関数（降順ソート）
int compare_results(const void *a, const void *b) {
    return ((ExamResult *)b)->total - ((ExamResult *)a)->total;
}

// エラーデータのみを表示する関数
void display_error_data(ExamResult results[], int count) {
    int error_exists = 0;

    // **エラーデータがあるかチェック**
    for (int i = 0; i < count; i++) {
        if (results[i].is_error) {
            error_exists = 1;
            break;
        }
    }

    // **エラーデータがある場合のみ表示**
    if (error_exists) {
        printf("\n－－－－－－－－－－－（エラーデータ）－－－－－－－－－－－－－－－－－\n");
        for (int i = 0; i < count; i++) {
            if (results[i].is_error) {
                printf("　  %6s  %-20s  ???", results[i].id, results[i].name);
                for (int j = 0; j < MAX_SUBJECTS; j++) {
                    printf("  ???");
                }
                printf("\n");
            }
        }
    }
}

// 試験成績を表示する関数
void display_exam_results(ExamResult results[], int count, int num_subjects, const char *title) {
    printf("\n○%s\n", title);
    printf("　順位 生徒番号　氏　　名　　　　　　総合点");
    for (int i = 0; i < num_subjects; i++) {
        printf(" 科目%d", i+1);
    }
    printf("\n");

    for (int i = 0; i < count; i++) {
        if (!results[i].is_error) {
            printf("　%4d   %-6s  %-20s  %4d", i + 1, results[i].id, results[i].name, results[i].total);
            for (int j = 0; j < num_subjects; j++) {
                printf("  %4d", results[i].scores[j]);
            }
            printf("\n");
        }
    }

    // 最後にエラーデータを出力（エラーがある場合のみ）
    display_error_data(results, count);
}

// メイン関数
int main() {
    Student students[MAX_STUDENTS];
    ExamResult results[MAX_STUDENTS];
    int student_count = 0;
    int exam_count = 0;
    int num_subjects[] = {3, 5, 3, 3, 5}; // 試験ごとの科目数
    char *exam_files[MAX_EXAMS] = {
        "examin01.txt", "examin02.txt", "examin03.txt", "examin04.txt", "examin05.txt"
    };
    char *exam_titles[MAX_EXAMS] = {
        "第一回模擬試験成績", "第二回模擬試験成績", "第三回模擬試験成績", "第四回模擬試験成績", "第五回模擬試験成績"
    };

    load_students("student.txt", students, &student_count);

    printf("\n※※　模擬試験の成績一覧　※※\n");

    for (int i = 0; i < 5; i++) {
        load_exam_results(exam_files[i], results, &exam_count, num_subjects[i], students, student_count);
        qsort(results, exam_count, sizeof(ExamResult), compare_results);
        display_exam_results(results, exam_count, num_subjects[i], exam_titles[i]);
    }

    return 0;
}
