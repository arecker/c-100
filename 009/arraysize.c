#include <stdio.h>

short array_s[10];
float array_f[10];
double array_d[10];

int main(void) {
  printf("\t\tshort\t\t\tfloat\t\t\tdouble\n");
  printf("\t\t---\t\t\t---\t\t\t---");
  for (int i = 0; i < 10; i++) {
    printf("\nElement %d:\t%p\t\t%p\t\t%p",
	   i, &array_s[i], &array_f[i], &array_d[i]);
  }
  printf("\n");
  return 0;
}
