#include <stdio.h>

struct coord {
  int x;
  int y;
} house = {12, 14};

int main(void) {
  printf("house: (%d, %d)\n", house.x, house.y);
  return 0;
}
