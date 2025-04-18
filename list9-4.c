// Ex0810.c
#include <stdio.h>

int main(void)
{
	char name[48];

	printf("お名前は : ");
	fflush(0);
//	scanf("%s", name);
	gets(name);

	printf("こんにちは、%sさん!!\n", name);
	fflush(0);

	return 0;
}

