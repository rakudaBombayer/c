#include <stdio.h>


#define	SIZE 10

int main(void)
{
	FILE *fp;


	double a[SIZE] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0};



	if((fp = fopen("SIZE.bin", "wb")) == NULL){
		printf("\aファイルをオープンできません。 \n");
		fflush(0);
	}
	else{
		fwrite(a, sizeof(double), SIZE,  fp);
		fclose(fp);
	}

	if((fp = fopen("ARRAY.bin", "r")) == NULL){
		printf("\aファイルをオープンできません。 \n");
		fflush(0);
	}
	else{

		fread(fp, sizeof(double), SIZE, fp);
		for(int i = 0; i < SIZE; i++){
			printf("a[%d] = %.1f\n", i,  a[i]);
			fflush(0);
		}
		fclose(fp);
	}



	return 0;
}
