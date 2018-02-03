#include <stdio.h>

int recurse(unsigned int i);

int recurse(unsigned int i)
{
  if (i == 1) return i;
  return i * recurse(i - 1);
}

int main(void)
{
  unsigned int number;
  printf("Number: ");
  scanf("%d", &number);
  printf("Factorial: %d\n", recurse(number));
  return 0;
}
