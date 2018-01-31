#include <stdio.h>
#include <stdlib.h>
#define BUFF_SIZE 256

int line;

void display_usage(void);

int main(int argc, char *argv[])
{
  char buffer[BUFF_SIZE];
  FILE *fp;

  if (argc < 2)
  {
    display_usage();
    return 1;
  }

  if ((fp = fopen(argv[1], "r")) == NULL)
  {
    fprintf(stderr, "Error opening \"%s\"!\n", argv[1]);
    return 1;
  }

  while (fgets(buffer, BUFF_SIZE, fp) != NULL)
    fprintf(stdout, "%4d:\t%s", line++, buffer);

  return 0;
}

void display_usage(void)
{
  printf("USAGE: list_it filename.ext\n");
}
