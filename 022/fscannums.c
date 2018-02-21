/* Reads in a list of numbers from a text file */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp = fopen("input.txt", "r");

	if (fp == NULL) {
		perror("Error opening up file");
		return 1;
	}

	float f1, f2, f3, f4, f5;
	fscanf(fp, "%f %f %f %f %f", &f1, &f2, &f3, &f4, &f5);

	printf("Numbers: %f %f %f %f %f\n", f1, f2, f3, f4, f5);
}
