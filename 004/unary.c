/* Demonstrate unary operators */

#include <stdio.h>

int a, b;

int main(void)
{
  a = b = 0;

  printf("Count up!\n");
  printf("POST   PRE\n");
  printf("%d      %d\n", a++, ++b);
  printf("%d      %d\n", a++, ++b);
  printf("%d      %d\n", a++, ++b);
  printf("%d      %d\n", a++, ++b);
  printf("%d      %d\n", a++, ++b);

  printf("Current value of a and b:\n");
  printf("%d      %d\n\n", a, b);

  printf("Count down!\n");
  printf("POST   PRE\n");
  printf("%d      %d\n", a--, --b);
  printf("%d      %d\n", a--, --b);
  printf("%d      %d\n", a--, --b);
  printf("%d      %d\n", a--, --b);
  printf("%d      %d\n", a--, --b);

  return 0;
}
