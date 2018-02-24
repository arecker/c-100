#include <string.h>
#include <stdio.h>

void flushstdin(void);

int main(void)
{
	char word[80], character;
	printf("Word: ");
	scanf("%s", word);
	flushstdin();
	printf("Character: ");
	scanf("%c", &character);

	char *loc = strchr(word, character);

	if (loc == NULL) {
		printf("Could not find %c in %s.\n", character, word);
	} else {
		int idx = word - loc;
		printf("Found %c at index %d of %s.\n", character, idx, word);
	}

	return 0;
}

void flushstdin(void)
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}
