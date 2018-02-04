#include <stdio.h>
void print_ttable(int outer, int inner);

int main(void) {
  int inner = 10;
  int outer = 10;
  printf("The times table:\n");
  print_ttable(inner, outer);
  return 0;
}

void print_ttable(int outer, int inner) {
  for (int a = 1; a <= outer; a++) {
    for (int b = 1; b <= inner; b++) {
      printf("%d\t", a * b);
    }
    printf("\n");
  }
}
