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

void print_bits(unsigned x)
{
    int i;
    for(i = int_bits() - 1; i >= 0; i--)
        putchar(((x >> i) & 1U) ? '1' : '0');
}

unsigned lrotate(unsigned x, int n)
{
    int i = int_bits();
    return((x << n | x >> (i - n)));
}

unsigned set_n(unsigned x, int pos, int n)
{
    for(int i = pos ; i <= (pos + n); i ++){
        x = (x | lrotate(1U, i));
    }
    return x ;
}

unsigned reset_n(unsigned x, int pos, int n)
{
    for(int i = pos ; i <= (pos + n); i ++){
        x = (x & ~lrotate(1U, i));
    }
    return x ;
}

unsigned inverse_n(unsigned x, int pos, int n)
{
    for(int i = pos ; i <= (pos + n); i ++){
        x = (x ^ lrotate(1U, i));
    }
    return x ;
}

int main(void)
{
    unsigned x, pos, n;


    printf("非負の整数を入力して下さい：");fflush(0); scanf("%u",&x);
    printf("何ビット目を変更しますか："); fflush(0); scanf("%u",&pos);
    printf("何ビット目まで変換しますか：");fflush(0); scanf("%u",&n);

    printf("\n整数                        　  　　 ：");fflush(0); print_bits(x);
    printf("\n%dビット目から＋%dビット目までを1にします。  ：",pos, n);fflush(0); print_bits(set_n(x,pos,n));
    printf("\n%dビット目から＋%dビット目までを0にします。  ：",pos, n);fflush(0); print_bits(reset_n(x,pos,n));
    printf("\n%dビット目から＋%dビット目までを反転します。 ：",pos, n);fflush(0); print_bits(inverse_n(x,pos,n));

    putchar('\n');

    return 0;
}
