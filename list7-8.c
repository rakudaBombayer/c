// Ex0701.c

#include <stdio.h>


int count_bits(unsigned x)
{
	int bits = 0;
	while (x) {
		if (x & 1U) bits++;
		x >>= 1;

	}
	return bits;
}


int int_bits(void)
{
	return count_bits(~0U);

}


void print_bits(unsigned x)
{
	for (int i = int_bits() - 1; i >=0; i--)
		putchar(((x >> i) & 1U)  ? '1' :  '0');

}


int main(void)
{
	unsigned x, n;

	printf("非負の整数 : ");
	fflush(0);
	scanf("%u", &x);

	printf("シフトするビット数 : ");
	fflush(0);
	scanf("%u", &n);

//	putchar('\n');
//	printf("整数   = ");
//	fflush(0);

	printf("整数   = ");
	fflush(0);
	print_bits(x);
	putchar('\n');

	printf("左シフト :   = ");
	fflush(0);
	print_bits(x << n);
	putchar('\n');

	printf("右シフト :   = ");
	fflush(0);
	print_bits(x >> n);
	putchar('\n');


}
