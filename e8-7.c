#include <stdio.h>


int combination(int n, int r)
{
    if (r == 0 || n == r)
        return 1;
    else if (r == 1)
        return n;
    else
        return combination(n - 1, r - 1) + combination(n - 1, r);
}



int main(void)
{
	int num, rum;

	printf("整数を入力せよ : ");
	fflush(0);
	scanf("%d", &num);

	scanf("%d", &rum);

	printf("%dと%dの組み合わせは%dです。", num, rum, combination(num, rum));
	fflush(0);

	return 0;
}
