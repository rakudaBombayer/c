// Ex0704.c

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

void print_bits(unsigned x)
{
    int i;
    for(i = int_bits() - 1; i >= 0; i--)
        putchar(((x >> i) & 1U) ? '1' : '0');
}

unsigned set(unsigned x, int pos)
{
    return((x | pos));
    
}

unsigned reset(unsigned x, int pos)
{
    return((x & ~pos));
    
}

unsigned inverse(unsigned x, int pos)
{
    return((x ^ pos));
    
}


int main(void)
{
    unsigned x, n;
    

    printf("非負の整数を入力して下さい："); scanf("%u",&x);
    printf("論理演算するビット目："); scanf("%u",&n);

    putchar('\n');
    printf("元の値 = ");  print_bits(x);              putchar('\n');
    printf("セット  = ");  print_bits(set(x, n));    putchar('\n');
    printf("リセット = ");  print_bits(reset(x, n));     putchar('\n');
    printf("反転    = ");  print_bits(inverse(x, n));   putchar('\n');

    return 0;
}

