/* Simple for loop */
#include <stdio.h>
#define MAX_COUNT 20

int count;

int main(void) {
  for (count = 1; count <= MAX_COUNT; count++)
    printf("%d\n", count);

  return 0;
}
