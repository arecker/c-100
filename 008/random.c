#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int random_array[SIZE][SIZE][SIZE];
int a, b, c;

int main(void) {
  for (a = 0; a < SIZE; a++) {
    for (b = 0; b < SIZE; b++) {
      for (c = 0; c < SIZE; c++) {
	random_array[a][b][c] = rand();
      }
    }
  }

  for (a = 0; a < SIZE; a++) {
    for (b = 0; b < SIZE; b++) {
      for (c = 0; c < SIZE; c++) {
	printf("random_array[%d][%d][%d] = %d\n",
	       a, b, c, random_array[a][b][c]);
      }

      printf("Press CTRL-C to quit.  Any key to continue.\n");
      getchar();
    }
  }

  return 0;
}
