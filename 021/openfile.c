#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	char filename[40], mode[4];

	printf("Enter a file name: ");
	scanf("%s", filename);
	printf("Enter a mode: ");
	scanf("%s", mode);

	// Try to open the file
	if ((fp = fopen(filename, mode)) != NULL) {
		printf("Successfully opened %s in mode %s\n", filename, mode);
		fclose(fp);
		return 0;
	} else {
		fprintf(stderr, "Error opening %s in mode %s\n", filename, mode);
		return 1;
	}

	return 0;
}
