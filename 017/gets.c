#include <stdio.h>
#define BUFFER_SIZE 10

int main(void)
{
	char buffer[BUFFER_SIZE];

	puts("Enter one line at a time to echo output.");
	puts("Enter a blank line to exit");

	while (*buffer != '\n')
	{
		fgets(buffer, BUFFER_SIZE, stdin);
		puts(buffer);
	}

	return 0;
}
