#include <stdio.h>
#include "math.c"

int main(void)
{
	int number;

	printf("Integer: ");
	scanf("%d", &number);
	printf("%d^2 = %lu\n", number, square(number));
	return 0;
}
