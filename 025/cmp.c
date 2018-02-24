#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80], str2[80];
	printf("str1: ");
	scanf("%s", str1);
	printf("str2: ");
	scanf("%s", str2);

	int r = strcmp(str1, str2);

	if (r == 0) {
		puts("EQUAL");
	} else if (r < 0) {
		puts("str1 is less than str2");
	} else {
		puts("str2 is less than str1");
	}
}
