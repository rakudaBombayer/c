#include <stdio.h>


int main(void)
{
	FILE *sfp;
	FILE *dfp;
	char sname[FILENAME_MAX];
	char dname[FILENAME_MAX];


	printf("コピー元ファイル名 : ");
	fflush(0);
	scanf("%s", sname);

	printf("コピー先ファイル名 : ");
	fflush(0);
	scanf("%s", dname);


	if((sfp = fopen(sname, "r"))  == NULL)
		printf("\aコピー元ファイルをオープンできません。\n");
	else{

		if((dfp = fopen(dname, "w")) == NULL)
		{
			printf("\aコピー元ファイルをオープンできません。\n");
			fflush(0);
		}
		else{
			int ch;
			while ((ch = fgetc(sfp)) != EOF){
				putchar(ch);
				fputc(ch, dfp);
			}
			fclose(dfp);
		}
		fclose(sfp);
	}

	return 0;
}
