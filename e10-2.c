//Ex1002.c

#include <stdio.h>

void invrement_date(int *y, int *m, int *d)
{
    if (*d >= 28) {
        if (*m == 2 || *m == 4 || *m == 6 || *m == 9 || *m == 11) {
            if (*m == 2) {
                if (*y % 4 == 0) {
                    if (*d < 29) {
                        *d = *d + 1;
                    } else if (*d > 28) {
                        *m = *m + 1;
                        *d = 1;
                    }
                } else if (*d < 28) {
                    *d = *d + 1;
                } else if (*d > 27) {
                    *m = *m + 1;
                    *d = 1;
                }
            } else if (*m == 4 || *m == 6 || *m == 9 || *m == 11) {
                if (*d < 30) {
                    *d = *d + 1;
                } else if (*d > 29) {
                    *m = *m + 1;
                    *d = 1;
                }
            } else {
                if (*d < 31) {
                    *d = *d + 1;
                } else if (*d > 30) {
                    *m = *m + 1;
                    *d = 1;
                }
            }
        } else {
            *d = *d + 1;
        }

        if (*m == 12 && *d == 32) {
            *d = 1;
            *m = 1;
            *y = *y + 1;
        }
    }
}

void decrement_date(int *y, int *m, int *d)
{
    *d = *d - 1;

    if (*d < 1) {
        *m = *m - 1;
        if (*m == 2 || *m == 4 || *m == 6 || *m == 9 || *m == 11) {
            if (*m == 2) {
                if (*y % 4 == 0) {
                    *d = 29;
                } else {
                    *d = 28;
                }
            } else if (*m == 4 || *m == 6 || *m == 9 || *m == 11) {
                *d = 30;
            }
        } else {
            *d = 31;
        }
    }
    if (*m == 0) {
        *m = 12;
        *y = *y - 1;
    }
}


int main(void)
{
    int i;
    int nen,tuki,hi;

    printf("西暦：");
    fflush(0);
    scanf("%d",&nen);
    printf("月：");
    fflush(0);
    scanf("%d",&tuki);
    printf("日：");
    fflush(0);
    scanf("%d",&hi);

    printf("%d年%d月%d日\n",nen,tuki,hi);
    fflush(0);

    printf("番号を入力してください。（1_１日増やす、2_１日減らす）\n");
    fflush(0);
    scanf("%d",&i);

    if(i == 1){
        invrement_date(&nen,&tuki,&hi);
        printf("%d年%d月%d日\n",nen,tuki,hi);
        fflush(0);
    }

    if(i == 2){
        decrement_date(&nen,&tuki,&hi);
        printf("%d年%d月%d日\n",nen,tuki,hi);
        fflush(0);
    }

    return 0;
}
