// Ex0810.c
#include <stdio.h>

int main(void)
{

	char s[3][128];

	for (int i = 0; i < 3; i++){
		printf("s[%d] : ", i);
		fflush(0);
		scanf("%s", s[i]);
	}


	for (int i = 0; i < 3; i++)
		printf("s[%d] = \"%s\"\n", i, s[i]);
		fflush(0);

	return 0;
}

