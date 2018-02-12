#include <stdio.h>

void func(void);

int main(void) {
  for (int i = 0; i < 20; i++) {
    printf("Iteration %d.  ", i);
    func();
  }
}

void func(void) {
  static int x = 0;
  int y = 0;
  printf("x = %d, y = %d\n", x++, y++);
}
