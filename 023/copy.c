#include <stdio.h>

int cp(char *source, char *destination);
void flush_stdin(void);

int main(void)
{
	char src[80], dest[80];
	printf("COPY [src] [dest]: ");
	scanf("%s %s", src, dest);

	flush_stdin();

	if (cp(src, dest) != 0) {
		perror("cp");
		return 1;
	} else return 0;
}

int cp(char *source, char *destination)
{
	FILE *sfile, *dfile;

	if ((sfile = fopen(source, "rb")) == NULL)
		return -1;

	if ((dfile = fopen(destination, "wb")) == NULL) {
		fclose(sfile);
		return -1;
	}

	while (!feof(sfile))
		fputc(fgetc(sfile), dfile);

	fclose(sfile);
	fclose(dfile);

	return 0;
}

void flush_stdin(void)
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}
