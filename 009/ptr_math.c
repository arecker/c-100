#include <stdio.h>

int array_i[] = {1, 2, 3, 4, 5};
float array_f[] = {.1, .2, .3, .4, .5};

int *ptr_i = array_i;
float *ptr_f = array_f;

int main(void) {
  for (int i = 0; i < 5; i++) {
    printf("%d\t%f\n", *ptr_i++, *ptr_f++);
  }
  return 0;
}
