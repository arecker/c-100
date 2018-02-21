/* Save an array to a file in binary mode, then read it back */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

void populate_array(int *array);
void display_array(char *message, int *array);
void save_array(char *filename, int *array);
void read_array(char *filename, int *array);

int main(void)
{
	int array1[SIZE], array2[SIZE];

	puts("Populating array with random numbers");
	populate_array(array1);

	puts("Saving array");
	save_array("direct.txt", array1);

	puts("Reading file into new array");
	read_array("direct.txt", array2);

	display_array("array1", array1);
	display_array("array2", array2);

	return 0;
}

void populate_array(int *array)
{
	srand(time(NULL));  // Seed randomness
	for (int i = 0; i < SIZE; i++)
		*(array + i) = (int) rand();
}

void display_array(char *message, int *array)
{
	printf("%s: ", message);
	for (int i = 0; i < SIZE; i++)
		printf("%d ", *(array + i));
	printf("\n");
}

void save_array(char *filename, int *array)
{
	FILE *fp = fopen(filename, "wb");

	if (fp == NULL) {
		perror("Error opening file");
		exit(1);
	}

	if (fwrite(array, sizeof(int), SIZE, fp) != SIZE) {
		perror("Error writing to file");
		exit(1);
	}

	fclose(fp);
}

void read_array(char *filename, int *array)
{
	FILE *fp = fopen(filename, "rb");

	if (fp == NULL) {
		perror("Error opening file");
		exit(1);
	}

	if (fread(array, sizeof(int), SIZE, fp) != SIZE) {
		perror("Error reading file");
		exit(1);
	}

	fclose(fp);
}
