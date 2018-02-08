#include <stdio.h>

#define BEGIN 1
#define END 200

int main(void) {
  for (unsigned int i = BEGIN; i < END; i++)
    printf("%d: %c\n", i, i);

  return 0;
}
