#include <stdio.h>

int x = 0, y = 1;

void some_function(void);

int main(void)
{
  printf("BEFORE some_function(), x=%d, y=%d\n", x, y);
  some_function();
  printf("AFTER  some_function(), x=%d, y=%d\n", x, y);
}

void some_function(void)
{
  int x = 80, y = 90;
  printf("DURING some_function(), x=%d, y=%d\n", x, y);
  return;
}
