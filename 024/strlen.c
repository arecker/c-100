#include <stdio.h>
#include <string.h>

int main(void)
{
	puts("Enter a string.");

	char buffer[80];
	fgets(buffer, 80, stdin);

	size_t length = strlen(buffer);
	printf("That string is %lu characters long.\n", length);
	return 0;
}
