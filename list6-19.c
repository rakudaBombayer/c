#include <stdio.h>


int fx;



int main(void)
{
	static int  si;
	static double sd;
	static int    sa[5];


	printf("fx = %d\n", fx);
	printf("si = %d\n", si);
	printf("sd = %f\n", sd);


	for (int i = 0; i < 5; i++)
		printf("sa[%d] = %d\n", i, sa[i]);


	return 0;


}

