#include <stdio.h>
#include <string.h>


int main(void)
{
	char s1[10];
	char *x = "XXXXXXXXX";


	strcpy(s1, x);
	strncpy(s1, "12345", 3);
	printf("s1 = \"%s\"\n", s1);
	fflush(0); // fflush(0) は未定義の動作です。標準出力の場合は fflush(stdout) を使用します

	strcpy(s1, x);
	strncpy(s1, "12345", 5);
	printf("s1 = \"%s\"\n", s1);
	fflush(0);

	strcpy(s1, x);
	strncpy(s1, "12345",  7);
	printf("s1 = \"%s\"\n", s1);
	fflush(0);


	return 0;

}
