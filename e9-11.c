// Ex0911.c

#include <stdio.h>
#define NO1 5
#define NO2 128

void put_strary(const char s[][NO2], int n)
{
	for (int i = 0; i < n - 1; i++)
	        printf("s[%d] = \"%s\"\n", i, s[i]);
}

int main(void)
{
	int i;
	int n = 0;
	char s[NO1][NO2] = {0};

    for (i = 0; i < NO1; i++) {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);

        n++;

        if (s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$') {
            i = NO1;
        }
    }

    put_strary(s, n);

}
