#include <stdio.h>

double square(double x);

int main(void)
{
	double (*func)(double x) = square;
	printf("%d squared = %f\n", 4, func(4.0));
	return 0;
}

double square(double x)
{
	return x * x;
}
