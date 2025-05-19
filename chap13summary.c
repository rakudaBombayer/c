#include <stdio.h>

int main(void)
{
	FILE *fp;
	char fname[FILENAME_MAX];


	printf("コピー先ファイル名:");
	fflush(0);
	scanf("%s\n", fname);


	if ((fp = fopen(fname, "w")) == NULL){
		printf("\aコピー先ファイルをオープンできません。\n");
		fflush(0);
	}
	else{
		int ch;
		while ((ch = fgetc(stdin)) != EOF)
			fputc(ch, fp);
		fclose(fp);

	}

	return 0;

}
