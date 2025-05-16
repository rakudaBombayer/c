#include <time.h>
#include <stdio.h>

int main(void)
{
	FILE *fp;

	if ((fp = fopen("dt_dat", "w"))  == NULL)
		printf("\aファイルをオープンできません \n");
	else {
		time_t current = time(NULL);
		struct tm *timer = localtime(&current);


		printf("現在の日付 ・時刻をかき出しました。");
		fflush(0);

		fprintf(fp, "%d %d %d %d %d %d\n",
				timer->tm_year + 1900, timer->tm_mon +1, timer->tm_mday,
				timer->tm_hour,        timer->tm_min,     timer->tm_sec

		);
		fclose(fp);
	}







	return 0;


}
