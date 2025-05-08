#include <stdio.h>
#include <string.h>


#define NAME_LEN 64


typedef struct  {
	char name[NAME_LEN];
	int height;
	double weight;
} Student;



int main(void)
{

	Student takao;

	printf("氏名 : ");
	fflush(0);
	scanf("%s", takao.name);

	printf("身長 : ");
	fflush(0);
	scanf("%d", &takao.height);

	printf("体重 : ");
	fflush(0);
	scanf("%lf", &takao.weight);


	printf("氏名=%s\n", takao.name);
	fflush(0);
	printf("身長=%d\n", takao.height);
	fflush(0);
	printf("体重=%.1f\n", takao.weight);
	fflush(0);


	return 0;
}


