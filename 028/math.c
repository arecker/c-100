#include <math.h>
#include <stdio.h>

int main(void)
{
	double x;
	printf("x: ");
	scanf("%lf", &x);
	printf("ceil: %lf\n", ceil(x));
	printf("floor: %lf\n", floor(x));

	if (x > 0)
		printf("sqrt: %lf\n", sqrt(x));

	for (int i = 2; i < 11; i++)
		printf("%lf to the %d power: %lf\n", x, i, pow(x, (double) i));

	return 0;
}
