#include <stdio.h>
#include <ctype.h>

#define FILE_NAME 256 // ファイル名の最大長を定義

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
			while ((ch = fgetc(sfp)) != EOF)
				fputc(tolower(ch), dfp);
		}
		fclose(sfp);
	}



	return 0;
}
#include <stdio.h>
#include <ctype.h>

#define FILE_NAME 256 // ファイル名の最大長を定義

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
			while ((ch = fgetc(sfp)) != EOF)
				fputc(tolower(ch), dfp);
		}
		fclose(sfp);
	}



	return 0;
}
