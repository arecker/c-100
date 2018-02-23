#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	char source[80] = "This is the source string.";
	printf("source: %s\n", source);

	/* This doesn't require allocated memory, since dest1 is
	 * already a buffer of 80 chars */
	char dest1[80];
	strcpy(dest1, source);
	printf("dest1: %s\n", dest1);

	/* To copy to dest2, allocate enough space for the string,
	 * plus one byte for the null terminator*/
	char *dest2 = (char *) malloc(strlen(source) + 1);
	strcpy(dest2, source);
	printf("dest2: %s\n", dest2);

	/* Demonstrate the use of strncpy by only copying some of the
	 * string. Isn't it just so exciting? */
	char *dest3 = (char *) malloc(5);
	strncpy(dest3, source, 4);
	printf("dest3: %s\n", dest3);  // Should print just "This"
	return 0;
}
