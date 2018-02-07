#include <stdio.h>

int var = 1;
int *ptr;

int main(void) {
  ptr = &var;
  printf("The value of var according to var: %d\n", var);
  printf("The address of var according to var: %p\n", &var);
  printf("The value of var according to ptr: %d\n", *ptr);
  printf("The address of var according to ptr: %p\n", ptr);
  return 0;
}
