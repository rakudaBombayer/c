#include <stdio.h>

#define FILE_NAME 256 // ファイル名の最大長を定義

int main(void)
{
	FILE *fp;
	char fname[FILE_NAME];

	printf("ファイル名 : ");
	fflush(0);
	scanf("%s", fname);

	if ((fp = fopen(fname, "r")) == NULL)
		printf("\aファイルをオープンできません \n");
	else {
		int ch;
		int cnt[10] = {0};

		while ((ch = fgetc(fp)) != EOF)
			if (ch >= '0' && ch <= '9')
				cnt[ch - '0']++;
		fclose(fp);

		puts("数字文字の出現回数");
		for (int i = 0; i < 10; i++)
			printf("'%d' : %d\n", i, cnt[i]);
	}

	return 0;
}
