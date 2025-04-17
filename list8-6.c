#include <stdio.h>

enum animal {Dog, Cat, Monkey, Invalid};


void dog(void)
{
	puts("ワンワン!!");
}

void cat(void)
{
	puts("ニャーオ!!");
}

void monkey(void)
{
	puts("キッキ!!");
}

enum animal select(void)
{
	int tmp;

	do {
		printf("0...犬  1...猫    2...猿  3...終了");
		fflush(0);
		scanf("%d", &tmp);
	} while (tmp < Dog || tmp > Invalid);

	return tmp;
}



int main(void)
{
	enum animal selected;

	do {
		switch(selected = select()) {
		case Dog     : dog();   break;
		case Cat     : cat();   break;
		case Monkey     : monkey();   break;
		}
	} while (selected = Invalid);

	return 0;
}
