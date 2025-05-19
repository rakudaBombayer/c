#include <stdio.h>
#include <time.h>


char data_file[] = "datetime.dat";


void get_data(void)
{
	FILE *fp;

	if((fp = fopen(data_file, "rb"))     == NULL)
		printf("本プログラムを実行するのは初めてですね。 \n");
	else{
		struct tm local;
		fread(&local, sizeof(struct tm), 1, fp);
		printf("前回は%d年%d月%d日%d時%d分%d秒でした。\n",
			local.tm_year +1900,  local.tm_mon +1,    local.tm_mday,
			local.tm_hour,      local.tm_min,      local.tm_sec);
		fclose(fp);
	}
}

void put_data(void)
{
	FILE *fp;

	if((fp = fopen(data_file, "wb"))   == NULL)
		printf("\aファイルをオープンできません。\n");
	else{
		time_t current = time(NULL);
		struct tm *timer = localtime(&current);
		fwrite(timer, sizeof(struct tm), 1, fp);
		fclose(fp);
	}
}

int main(void)
{
	get_data();

	put_data();


	return 0;

}










