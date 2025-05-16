#include <time.h>
#include <stdio.h>

#define NAME_LEN  100

int main(void)
{
	FILE *fp;

	if ((fp = fopen("hv2_dat", "w"))  == NULL)
		printf("\aファイルをオープンできません \n");
	else {
		char  name[NAME_LEN];
		double  height;
		double weight;

		for(int  i = 0; ; i++){
			int flag;
			printf("%d人目のデータを入力しますか　はい　1いいえ 0\n", i + 1);
			fflush(0);

			scanf("%d", &flag);
			if(flag == 0) break;


			printf("名前  : ");
			fflush(0);
			scanf("%s", name);

			printf("身長  : ");
			fflush(0);
			scanf("%lf", &height);

			printf("体重  : ");
			fflush(0);
			scanf("%lf", &weight);

			fprintf(fp,  "%a %f %f\n", name, height, weight);

		}


		fclose(fp);
	}



	return 0;


}
