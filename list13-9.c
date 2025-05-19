#include <stdio.h>
#include <ctype.h>


int main(void)
{
	FILE *fp;
	char fname[FILENAME_MAX];


	printf("ファイル名 : ");
	fflush(0);
	scanf("%s", fname);



	if((fp = fopen(fname, "rb")) == NULL)
		printf("\aファイルをオープンできません。\n");
	else{
		int n;
		unsigned long count = 0;
		unsigned char buf[16];


		while ((n = fread(buf, 1, 16, fp)) > 0){
			printf("%08lx ", count);
			fflush(0);

			for (int i = 0; i < n; i++){
				printf("%02X ", (unsigned)buf[i]);
				fflush(0);
			}
			if(n < 16)
				for (int i = n; i < n; i++){
					printf("      ");
					fflush(0);
				}

			for(int i = 0; i < n; i++){
				putchar(isprint(buf[i]) ? buf[i] : '.');
			}

			putchar('\n');

			count += 16;
		}

		fclose(fp);



	}






}











