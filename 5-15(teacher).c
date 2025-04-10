#include <stdio.h>

int main(void)
{
	int drink[] = {7, 0, 2, 4, 3, 0, 0, 6};			// 飲酒度
	int smoke[] = {60, 10, 0, 20, 10, 0, 30, 0};	// 喫煙度

	for (int i = 0; i < 8; i++) {
		printf("%d人目／", i + 1);

		int d = drink[i];	// そのままだと関係式が見にくくなるので
		int s = smoke[i];

		if (d == 0 && s == 0) {
			puts("安全");
		} else if ((d == 0 && s <= 20) || (d <= 3 && s == 0)) {
			puts("注意");
		} else if (d <= 3 && s <= 20) {
			puts("要指導");
		} else {
			puts("要検査");
		}
	}
	return 0;
}

