// Ex0810.c
#include <stdio.h>

int main(void)
{
	printf("sizeof(\"123\")  =  %zu\n", sizeof("123"));
	printf("sizeof(\"AB\\tC\")  =  %zu\n", sizeof("AB\tC"));
	printf("sizeof(\"abc\\0def\")  =  %zu\n", sizeof("abc\0def"));

}

