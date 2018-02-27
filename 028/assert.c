#include <assert.h>
#include <stdio.h>

int main(void)
{
	int x;

	while (1) {
		printf("Enter the number 0: ");
		scanf("%d", &x);
		assert(x == 0);
		puts("Nice work");
	}

	return 0;
}
