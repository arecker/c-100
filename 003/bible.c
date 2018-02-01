#include <stdio.h>
#include <string.h>

#define BIBLE_PATH "/tmp/bible.txt"
#define BUFFER_SIZE 1024

int main(void)
{
  int charcount = 0;
  char buffer[BUFFER_SIZE];
  FILE *fp;

  if ((fp = fopen(BIBLE_PATH, "r")) == NULL)
  {
    printf("Cannot find path to bible");
    return 1;
  }

  while (fgets(buffer, BUFFER_SIZE, fp) != NULL)
    charcount += (int) strlen(buffer);

  printf("There are %d characters in the bible", charcount);
  return 0;
}
