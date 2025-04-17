#include <stdio.h>


int gcd_recursive(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd_recursive(b, a % b);
    }
}



int gcd (int x, int y)
{
	int max = x > y ? x : y;
	int min = x > y ? y : x;

	return max % min == 0 ? min : gcd(min, max % min);

}

int main(void)
{
	int num, rum;

	printf("整数を入力せよ : ");
	fflush(0);
	scanf("%d", &num);

	scanf("%d", &rum);

	printf("%dと%dの最大公約数は%d", num, rum, gcd_recursive(num, rum));
	fflush(0);

	return 0;
}
