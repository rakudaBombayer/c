// Ex0903.c

#include <stdio.h>

#define NUMBER 5

int main(void)
{
    int i;
    int n = 0;
    char s[NUMBER][128] = { 0 };

    for (i = 0; i < NUMBER; i++) {
        printf("s[%d] : ", i);
        fflush(0);
        scanf("%s", s[i]);

        n++;

        if (s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$') {
            i = NUMBER;
        }

    }

    for (i = 0; i < n - 1; i++)
        printf("s[%d] = \"%s\"\n", i, s[i]);
    	fflush(0);

    return 0;
}
