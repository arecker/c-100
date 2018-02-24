#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[27] = "a";
	char str2[2];

	str2[1] = '\0';

	for (int i = 98; i < 123; i++) {
		str2[0] = i;
		strcat(str1, str2);
		puts(str1);
	}

	return 0;
}
