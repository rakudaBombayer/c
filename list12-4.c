#include <stdio.h>
#include <string.h>


#define NAME_LEN 64


struct student {
	char name[NAME_LEN];
	int height;
	double weight;
};

void set_stdweight(struct student *s)
{
	if ((*s).weight <= 0)
		(*s).weight = ((*s).height - 100) * 0.9;

}

int main(void)
{
	struct student takao = {"Takao", 173};

	set_stdweight(&takao);


	printf("氏名=%s\n", takao.name);
	fflush(0);
	printf("身長=%d\n", takao.height);
	fflush(0);
	printf("体重=%.1f\n", takao.weight);
	fflush(0);


	return 0;
}


