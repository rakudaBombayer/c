#include <stdio.h>


int x = 75;


void print_x(void)
{
	printf("x = %d\n", x);
}



int main(void)
{
	int x = 999;

	print_x();

	printf("x = %d\n", x);

	for (int i = 0; i < 5; i++){
		int x = i * 100;
		printf("x = %d\n", x);
	}

	printf("x = %d\n", x);

	return 0;

}

