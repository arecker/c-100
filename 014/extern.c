#include <stdio.h>

int age = 28;

int main(void) {
  extern int age;
  printf("I am %d years old.\n", age);
  return 0;
}
