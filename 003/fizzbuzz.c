#include <stdio.h>

#define STOP_AT 1000000
#define FIZZ 3
#define BUZZ 5

void display(int);

int main(void)
{
  for (int i=0; i<STOP_AT; i++)
    display(i);
}

void display(int i)
{
  if (i % FIZZ == 0)
    printf("FIZZ\n");
  else if (i % BUZZ == 0)
    printf("BUZZ\n");
  else
    printf("%d\n", i);
}
