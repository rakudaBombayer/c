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
	unsigned a, b;

	printf("非負の整数を二つ入力せよ。\n");
	fflush(0);

	printf("a   :  ");
	fflush(0);
	scanf("%u", &a);

	printf("b   :  ");
	fflush(0);
	scanf("%u", &b);

	putchar('n');

	printf("a     =   ");
	fflush(0);
	print_bits(a);
	putchar('\n');

	printf("b     =   ");
	fflush(0);
	print_bits(b);
	putchar('\n');

	printf("a  & b   =   ");
	fflush(0);
	print_bits(a & b);
	putchar('\n');

	printf("a | b    =   ");
	fflush(0);
	print_bits(a | b);
	putchar('\n');

	printf("a   ^ b  =   ");
	fflush(0);
	print_bits(a ^ b);
	putchar('\n');

	printf("~a     =   ");
	fflush(0);
	print_bits(~a);
	putchar('\n');

	printf("~b     =   ");
	fflush(0);
	print_bits(~b);
	putchar('\n');



}
