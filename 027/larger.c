#include <stdio.h>

int *larger(int *a, int *b);

int main(void)
{
	int a, b;
	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);

	int *result = larger(&a, &b);

	if (result == NULL) {
		puts("They are the same size, dummy.");
	} else {
		printf("%d is bigger.\n", *result);
	}

	return 0;
}

int *larger(int *a, int *b)
{
	if (*a == *b)
		return NULL;
	if (*a > *b)
		return a;
	return b;
}
