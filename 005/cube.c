/* Cubes a number */
#include <stdio.h>

long input, answer;

long cubed(long x);

int main(void)
{
  printf("Integer: ");
  scanf("%d", (int *) &input);
  answer = cubed(input);
  printf("Cubed: %d\n", (int) answer);
  return 0;
}

long cubed(long x)
{
  return x * x * x;
}
