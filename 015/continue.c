#include <stdio.h>
#include <stdbool.h>

static bool is_vowel(char c);

int main(void)
{
	char buffer[81];
	puts("Enter a line of text");
	fgets(buffer, sizeof(buffer), stdin);
	for (int i = 0; buffer[i] != '\0'; i++) {
		if (is_vowel(buffer[i]))
			continue;
		putchar(buffer[i]);
	}
	return 0;
}

static bool is_vowel(char c) {
	static char vowels[] = {
		'a', 'e', 'i', 'o', 'u',
		'A', 'E', 'I', 'O', 'U'
	};

	static unsigned int limit = sizeof(vowels);
	for (unsigned long i = 0; i < limit ; i++) {
		if (vowels[i] == c)
			return true;
	}
	return false;
}
