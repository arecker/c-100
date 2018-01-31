#include <stdio.h>
#include <string.h>

int main(void)
{
  char buffer[256];

  printf("Enter your name and press enter:\n");
  fgets(buffer, 256, stdin);

  printf("Your name has %d characters and spaces\n", (int) strlen(buffer));

  return 0;
}
