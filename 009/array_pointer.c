#include <stdio.h>

int main(void) {
  int numbers[] = {1, 2, 3};
  /* WHAAAAAT */
  if (*numbers == 1) {
    printf("TRUE\n");		/* PLEASE GOD NO */
    /* IT PRINTS TRUE */
  } else {			/* why do u print true */
    printf("FALSE\n");		/* help me */
  }
  /* WHY DID YOU PRINT TRUE? */
  return 0;
}
