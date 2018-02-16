#include <stdio.h>

void print_array(int (*ptr)[4]);

int main(void)
{
	int multi[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	int (*ptr)[4] = multi;

	for (int i = 0; i < 3; i++)
		print_array(ptr++);

	return 0;
}

void print_array(int (*ptr)[4])
{
	int *p = *ptr;
	for (int i = 0; i < 4; i++)
		printf("%d\n", *p++);
}
