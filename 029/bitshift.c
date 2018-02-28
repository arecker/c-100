#include <stdio.h>

int main(void)
{
	unsigned int y, x = 255;

	printf("Decimal\t\tshift left by\tresult\n");

	for (int i = 1; i < 8; i++) {
		y = x << i;
		printf("%d\t\t%d\t\t%d\n", x, i, y);
	}

	printf("Decimal\t\tshift right by\tresult\n");

	for (int j = 1; j < 8; j++) {
		y = x >> j;
		printf("%d\t\t%d\t\t%d\n", x, j, y);
	}

	return 0;
}
