#include <stdio.h>

char *str_copy(char *d, const char *s)
{
	char *t = d;

	while (*d++ = *s++)
		;
	return t;


}

int main(void)
{
	char tmp[128];
	char s1[128], s2[128];

	printf("文字列 : ");
	fflush(0);
	scanf("%s", tmp);

	str_copy(s1, str_copy(s2, tmp));

	printf("s1 = \"%s\"\n", s1);
	fflush(0);

	printf("s2 = \"%s\"\n", s2);
	fflush(0);

	return 0;

}
