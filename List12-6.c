#include <stdio.h>



struct  xyz {
	int x;
	long y;
	double z;
};


struct xyz xyz_of(int x, long y, double z)
{
	struct xyz temp;

	temp.x = x;
	temp.y = y;
	temp.z = z;

	return temp;

}



int main(void)
{

	struct xyz s;

	s = xyz_of(12, 7654321, 35.689);


	printf("xyz.x=%d\n", s.x);
	fflush(0);
	printf("xyz.y=%ld\n", s.y);
	fflush(0);
	printf("xyz.z=%f\n", s.z);
	fflush(0);


	return 0;
}


