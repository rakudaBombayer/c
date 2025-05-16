#include <stdio.h>

int main(void)
{
	FILE *fp;
	char fname[FILENAME_MAX];

	printf("ファイル名 : ");
	fflush(0);
	scanf("%s", fname);


	if ((fp = fopen(fname, "r")) == NULL){
		printf("\aファイルをオープンできません。\n");
		fflush(0);
	}
	else {
		int ch;
		while ((ch = fgetc(fp)) != EOF)
			putchar(ch);


		fclose(fp);

	}


	return 0;

}
