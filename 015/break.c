/* Illustrate a `break` statement */

#include <stdio.h>

int main(void)
{
	char message[] = "This is a test message.  Truncate the first sentence.";
	printf("Original: %s\n", message);
	for (int i = 0; message[i] != '\0'; i++) {
		if (message[i] == '.') {
			message[i + 1] = '\0';
			break;
		}
	}
	printf("Modified: %s\n", message);
	return 0;
}
