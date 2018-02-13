#include <stdio.h>
#include <stdbool.h>
#define BIBLE_PATH "/tmp/bible.txt"
#define Y_IS_VOWEL true

struct result_set
{
	unsigned long other;
	unsigned long a;
	unsigned long e;
	unsigned long i;
	unsigned long o;
	unsigned long u;
#if Y_IS_VOWEL
	unsigned long y;
#endif
};

void process_char(char *c, struct result_set *results);
void print_results(struct result_set *results);

int main(void)
{
	FILE *fp = fopen(BIBLE_PATH, "r");

	if (fp == NULL) {
		puts("Error opening BIBLE_PATH");
		return 1;
	}

	int c;
	struct result_set results = {
		0,  // other
		0, 0, 0, 0, 0, // a, e, i, o, u
#if Y_IS_VOWEL
		0, // y
#endif
	};

	while ((c = fgetc(fp)) != EOF)
		process_char((char *) &c, &results);

	print_results(&results);
}

void process_char(char *c, struct result_set *results)
{
	switch (*c) {
	case 'a':
	case 'A':
		results->a++;
		return;
	case 'e':
	case 'E':
		results->e++;
		return;
	case 'i':
	case 'I':
		results->i++;
		return;
	case 'o':
	case 'O':
		results->o++;
		return;
	case 'u':
	case 'U':
		results->u++;
		return;
#if Y_IS_VOWEL
	case 'y':
	case 'Y':
		results->y++;
		return;
#endif
	default:
		results->other++;
		return;
	}
}

void print_results(struct result_set *results)
{
	printf("Total Characters: %lu\n",
		results->other +
		results->a + results->e + results->i +
		results->o + results->u);

	printf("  A: %lu\n", results->a);
	printf("  E: %lu\n", results->e);
	printf("  I: %lu\n", results->i);
	printf("  O: %lu\n", results->o);
	printf("  U: %lu\n", results->u);
#if Y_IS_VOWEL
	printf("  Y: %lu\n", results->y);
#endif
}
