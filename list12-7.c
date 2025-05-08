#include <stdio.h>
#include <string.h>

#define NUMBER 5
#define NAME_LEN 64



typedef struct{
	char name[NAME_LEN];
	int height;
	double weight;
} Student;


void swap_Student(Student *x, Student *y)
{
	Student temp = *x;
	*x = *y;
	*y = temp;

}


void sort_by_height(Student a[], int n)
{
	for (int i = 0; i < n -1; i++){
		for (int j = n -1; j > 1; j--)
			if (a[j - 1].height > a[j]. height)
					swap_Student(&a[j - 1], &a[j]);
	}
}



int main(void)
{
	Student std[] = {
			{"Sato", 178, 61.2},
			{"Sanaka", 178, 62.5},
			{"Takao", 178, 86.2},
			{"Mike", 178, 72.3},
			{"Masaki", 179, 77.5},
	};

	for (int i = 0; i < NUMBER; i++)
		printf("%-8s %6d%6.1f\n", std[i].name, std[i].height, std[i].weight);



	sort_by_height(std, NUMBER);

	puts("\n身長順にソートしました。");

	for (int i = 0; i < NUMBER; i++)
		printf("%-8s %6d%6.1f\n", std[i].name, std[i].height, std[i].weight);


	return 0;
}
