#include <stdio.h>

/* Demonstrate variable scope and blocks */

int main(void)
{
	int i = 0;
	printf("Outside the block, i is %d\n", i);

	{
		int i = 10;
		printf("Inside the block, i is %d\n", i);
	}

	printf("Outside the block again, i is %d\n", i);

	return 0;
}
