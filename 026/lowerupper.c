#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
	char buffer[80];
	puts("Enter a sentence, blank to exit");

	while (strcmp(fgets(buffer, 80, stdin), "\n") != 0) {
		/* Original */
		printf("%s", buffer);

		/* Upper case */
		for (int i = 0; i < (int) strlen(buffer); i++)
			printf("%c", toupper(buffer[i]));

		/* Lower case */
		for (int i = 0; i < (int) strlen(buffer); i++)
			printf("%c", tolower(buffer[i]));
	}

	return 0;
}
