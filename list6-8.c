#include <stdio.h>

void put_stars(int ch, int n)
{
	while (n-- > 0)
		putchar(ch);
}


int main(void)
{
	int len;

	printf("右下直角二等辺三角形を作ります。\n");
	fflush(0);
	printf("短辺 : ");
	fflush(0);
	scanf("%d", &len);

	for (int i = 1; i<= len; i++){
		put_stars(' ', len -i);
		put_stars('*', i);
		putchar('\n');

	}
	return 0;

}
