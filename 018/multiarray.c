#include <stdio.h>

int main(void)
{
	int multi[2][4];
	printf("multi = %p\n", multi);
	printf("multi[0] = %p\n", multi[0]);
	printf("&multi[0][0] = %p\n", &multi[0][0]);
	printf("sizeof(multi) = %lu\n", sizeof(multi));
	printf("sizeof(multi[0]) = %lu\n", sizeof(multi[0]));
	printf("sizeof(multi[0][0]) = %lu\n", sizeof(multi[0][0]));
	printf("multi = %u\n", (int) multi);
	printf("multi+1 = %u\n", (int) multi + 1);
	return 0;
}
