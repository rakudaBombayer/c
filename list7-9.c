// Ex0705.c

#include <stdio.h>

int count_bits(unsigned x)
{
    int bits = 0;
    while(x){
        if(x & 1U) bits++;
        x >>= 1;
    }
    return bits;
}

int int_bits()
{
    return count_bits(~0U);
}

void print_nbits(unsigned x, unsigned n)
{
	int i = int_bits();
	i = (n < i) ? n - 1 : i- 1;
	for ( ; i>= 0; i--){
		putchar(((x >> i) & 1U ) ?  '1' : '0' );
	}
}





int main(void)
{
  for (unsigned i = 0; i <= 65535; i++){
	  printf("%5u ", i);
	  fflush(0);

	  print_nbits(i , 16);
	  printf(" %06o %04X  ", i, i);
	  fflush(0);

  }

    return 0;
}
