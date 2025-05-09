#include <math.h>
#include <stdio.h>

#define sqr(n) ((n) * (n))

typedef struct {
	double x;
	double y;

} Point;


double distance_of(Point p1, Point p2)
{
	return sqrt(sqr(p1.x -p2.x) + sqr(p1.y -p2.y));

}


int main(void)
{
	Point crnt, dest;

	printf("現在地のX座標 : ");
	fflush(0);
	scanf("%lf", &crnt.x);

	printf("現在地のY座標 : ");
	fflush(0);
	scanf("%lf", &crnt.y);

	printf("目的地のX座標 : ");
	fflush(0);
	scanf("%lf", &dest.x);

	printf("目的地のY座標 : ");
	fflush(0);
	scanf("%lf", &dest.y);

	printf("目的地までの距離は%.2fです。\n", distance_of(crnt, dest));

	return 0;
}
