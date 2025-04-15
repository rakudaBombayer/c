#include <stdio.h>


int fx;

void put_count()
{
	static n = 1;

	printf("%d回目", n++);
	fflush(0);
	puts("");
}



int main(void)
{

	put_count();
	put_count();
	put_count();


	return 0;


}

