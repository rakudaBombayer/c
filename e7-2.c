// Ex0702.c

#include <stdio.h>

unsigned expo(unsigned n)
{
    unsigned pw = 1;
    while(n--){
        pw *= 2;
    }
    return(pw);
}

int main(void)
{
    unsigned n_mul, n_div, l_sht, r_sht;
    unsigned a, n;

    printf("整数を入力してください。：");
    fflush(0);
    scanf("%u",&a);

    printf("いくつシフトしますか：");
    fflush(0);
    scanf("%u",&n);

    n_mul = a * expo(n);
    n_div = a / expo(n);

    l_sht = a << n;
    r_sht = a >> n;

    printf("%u × (2の%u乗) = %u\n", a, n, n_mul);
    printf("%u <<< %u = %u\n", a, n, l_sht);
    printf("%u ÷ (2の%u乗) = %u\n", a, n, n_div);
    printf("%u >>> %u = %u\n", a, n, r_sht);

    return 0;
}
