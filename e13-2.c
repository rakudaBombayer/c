#include <stdio.h>

int main(void)
{
	FILE *fp;

	fp = fopen("abc", "w");

	if (fp == NULL) {
		printf("\aファイル\"abc\"が存在しませんでした。\n");
		 fflush(0); // 必要であれば
	} else {
		printf("ファイル\"abc\"が存在しませんでした。\n");
		 fflush(0); // 必要であれば
		fclose(fp);
	}

	return 0;
}
