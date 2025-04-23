//Ex1002.c
#include <stdio.h>

// 日付を1日進める関数
void increment_date(int *year, int *month, int *day) {
    int days_in_month;

    if (*month == 2) { // 2月の場合
        days_in_month = (*year % 4 == 0 && (*year % 100 != 0 || *year % 400 == 0)) ? 29 : 28;
    } else if (*month == 4 || *month == 6 || *month == 9 || *month == 11) { // 4, 6, 9, 11月の場合
        days_in_month = 30;
    } else { // その他の月の場合
        days_in_month = 31;
    }

    *day = *day + 1;

    if (*day > days_in_month) {
        *day = 1;
        *month = *month + 1;
        if (*month > 12) {
            *month = 1;
            *year = *year + 1;
        }
    }
}

// 日付を1日戻す関数
void decrement_date(int *year, int *month, int *day) {
    *day = *day - 1;

    if (*day < 1) {
        *month = *month - 1;
        if (*month < 1) {
            *month = 12;
            *year = *year - 1;
        }

        if (*month == 2) { // 2月の場合
            *day = (*year % 4 == 0 && (*year % 100 != 0 || *year % 400 == 0)) ? 29 : 28;
        } else if (*month == 4 || *month == 6 || *month == 9 || *month == 11) { // 4, 6, 9, 11月の場合
            *day = 30;
        } else { // その他の月の場合
            *day = 31;
        }
    }
}

int main(void) {
    int choice;
    int year, month, day;

    printf("西暦：");
    fflush(0);
    scanf("%d", &year);

    printf("月：");
    fflush(0);
    scanf("%d", &month);

    printf("日：");
    fflush(0);
    scanf("%d", &day);

    printf("%d年%d月%d日\n", year, month, day);

    printf("番号を入力してください。（1: １日増やす、2: １日減らす）\n");
    fflush(0);
    scanf("%d", &choice);

    if (choice == 1) {
        increment_date(&year, &month, &day);
        printf("翌日: %d年%d月%d日\n", year, month, day);
        fflush(0);
    } else if (choice == 2) {
        decrement_date(&year, &month, &day);
        printf("前日: %d年%d月%d日\n", year, month, day);
        fflush(0);
    } else {
        printf("無効な入力です。\n");
        fflush(0);
    }

    return 0;
}
