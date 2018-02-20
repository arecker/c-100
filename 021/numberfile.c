#include <stdio.h>
#include <stdlib.h>

void clear_kb(void);

int main(void)
{
	float data[5];
	printf("Enter 5 floating point numbers.\n");
	for (int i = 0; i < 5; i++)
		scanf("%f", &data[i]);

	clear_kb();

	char filename[20];
	FILE *fp;
	printf("Enter a filename: ");
	scanf("%s", filename);

	if ((fp = fopen(filename, "w")) == NULL) {
		fprintf(stderr, "Error opening file %s", filename);
		return 1;
	}

	// Write to the file
	for (int j = 0; j < 5; j++) {
		fprintf(fp, "data[%d] = %f\n", j, data[j]);
		fprintf(stdout, "\ndata[%d] = %f", j, data[j]);
	}

	fclose(fp);

	return 0;
}

void clear_kb(void)
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF) { };
}
