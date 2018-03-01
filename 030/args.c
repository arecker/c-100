#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	if (argc > 1) {
		printf("ARGS\n----\n");
		for (i = 0; i < argc; i++) {
			printf("- %s\n", argv[i]);
		}
	} else {
		printf("No args entered besides \"%s\"\n", *argv);
	}

	return 0;
}
