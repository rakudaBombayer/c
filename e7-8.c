//Ex0703.c

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

unsigned rrotate(unsigned x, int n)
{
    int i = int_bits();
    return((x >> n | (x << (i - n))));
}

unsigned lrotate(unsigned x, int n)
{
    int i = int_bits();
    return((x << n | x >> (i - n)));
}

int main(void)
{
    unsigned x, n;
    

    printf("非負の整数を入力して下さい："); scanf("%u",&x);
    printf("何ビット回転しますか："); scanf("%u",&n);

    printf("\n整数      ："); print_bits(x);
    printf("\n右に%d回転  ：",n); print_bits(rrotate(x,n));
    printf("\n左に%d回転  ：",n); print_bits(lrotate(x,n));
    puts("");

    return 0;
}
