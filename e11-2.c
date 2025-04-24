#include <stdio.h>

int main(void)
{
	char a[][5] = {"LISP", "C", "Ada"};
	char *p[] = {"PAUL", "X", "MAC"};

	int num_strings = sizeof(a) / sizeof(a[0]);

	int num_stringsp = sizeof(p) / sizeof(p[0]);

	for (int i = 0; i < num_strings; i++)
		printf("a[%d] = \"%s\"\n", i, a[i]);

	for (int i = 0; i < num_stringsp; i++)
		printf("p[%d] = \"%s\"\n", i, p[i]);


	return 0;

}
