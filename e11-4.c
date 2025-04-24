#include <stdio.h>
#include <string.h>

char *str_copy_while(char *d, const char s[], int num)
{
	int i = 0;
	while (i < num) {
		d[i] = s[i];
		i++;
	}
//	d[i] = '\0'; // コピーした文字列の終端にヌル文字を追加します
	return d;
}

int main(void)
{
	char s1[10];
	char *x = "XXXXXXXXX";

	strcpy(s1, x);
	str_copy_while(s1, "12345", 3);
	printf("s1 = \"%s\"\n", s1);
	fflush(0);

	strcpy(s1, x);
	str_copy_while(s1, "12345", 5);
	printf("s1 = \"%s\"\n", s1);
	fflush(0);

	strcpy(s1, x);
	str_copy_while(s1, "12345", 7);
	printf("s1 = \"%s\"\n", s1);
	fflush(0);

	return 0;
}
