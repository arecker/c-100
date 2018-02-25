#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 80

int main(void)
{
	puts("Enter a string to convert it to a double.");
	puts("Enter a blank to exit");

	char buffer[BUFFER_SIZE];

	while (strcmp(fgets(buffer, BUFFER_SIZE, stdin), "\n") != 0) {
		printf("The converted value is %f\n", atof(buffer));
	}

	return 0;
}
