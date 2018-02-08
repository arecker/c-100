#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *ptr = malloc(35 * sizeof(char));

  if (ptr == NULL) {
    puts("Not enough memory");
    exit(1);
  }

  char *p = ptr;

  for (int i = 65; i < 91; i++) 
    *p++ = i;

  *p = '\0';

  puts(ptr);
  free(ptr);
  
  return 0;
}
