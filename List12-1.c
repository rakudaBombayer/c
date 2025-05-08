#include <stdio.h>
#include <string.h>


#define NUMBER 5
#define NAME_LEN 64

void swap_int(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;

}

void swap_str(char *sx, char *sy)
{
	char temp[NAME_LEN];

	strcpy(temp, sx);
	strcpy(sx, sy);
	strcpy(sy, temp);

}


void sort(int num[], char str[][NAME_LEN], int n)
{
	for (int i = 0; i < n - 1; i++){
		for(int j = n - 1; j > i; j--) {
			if(num[j - 1] > num[j]){
				swap_int(&num[j - 1], &num[j]);
				swap_str(str[j - 1], str[j]);
			}
		}
	}
}

int main(void)
{

	int height[] = {178, 175, 173, 165, 179};
	char name[][NAME_LEN] = {"Sato", "Sanaka", "Takako", "Mike", "Masaki"};

	for (int i = 0; i < NUMBER; i++)
		printf("%2d : %-8s%4d\n", i +1 , name[i], height[i]);


	sort(height, name, NUMBER);

	puts("\n身長順にソートしました。");


	for(int i = 0; i < NUMBER; i++)
		printf("%2d : %-8s%4d\n", i +1 , name[i], height[i]);



	return 0;

}
