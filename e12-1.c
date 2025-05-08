#include <stdio.h>
#include <string.h>


#define NAME_LEN 64


struct student {
	char name[NAME_LEN];
	int height;
	double weight;
};


int main(void)
{
	struct student takao = {"Takao", 173};

	printf("氏名=%s\n", takao.name);
	fflush(0);
	printf("身長=%d\n", takao.height);
	fflush(0);
	printf("体重=%.1f\n", takao.weight);
	fflush(0);

	printf("氏名=%p\n", takao.name);
	fflush(0);
	printf("身長=%p\n", &takao.height);
	fflush(0);
	printf("体重=%pf\n", &takao.weight);
	fflush(0);

	return 0;
}


