#include <stdio.h>

int main(void)
{
	for (float x = 0.0; x <= 1.0; x += 0.01)
		printf("x = %f\n", x);

	return 0;

}
