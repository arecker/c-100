#include <stdio.h>

int main(void)
{
	int c;
	while ((c = getchar()) != '\n')
		putchar(c);
	return 0;
}
