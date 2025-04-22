
#include <stdio.h>
#define NUMBER 128


//void str_dcount(const char s[], int cnt[])
//{
//	int i = 0;
//	while (s[i]) {
//		if (s[i] >= '0' && s[i] <= '9')
//			cnt[s[i] - '0']++;
//		i++;
//
//	}
//}

void put_stringr(const char s[])
{
	int len = 0;
	while(s[len]){
		len++;
	}

	while(s[--len]){
		 putchar(s[len]);
	}

}




int main(void)
{
    char str[NUMBER];

    printf("文字列を入力せよ：");
    fflush(0);
    scanf("%s", str);

    printf("あなたの入力した文字列を反転しました：");
    fflush(0);
    put_stringr(str);
    puts("");


	return 0;

}
