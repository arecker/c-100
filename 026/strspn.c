#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80];
	puts("Enter str1");
	fgets(str1, 80, stdin);

	char str2[80];
	puts("Enter str2");
	fgets(str2, 80, stdin);

	puts("Searching...");
	unsigned long loc = strspn(str1, str2);

	if (loc == 0)
		puts("No match found.");
	else if (loc == strlen(str1) == strlen(str2))
		puts("They are the same word!");
	else
		printf("They match until position %lu.\n", loc);

	return 0;
}
