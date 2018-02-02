/* Convert seconds to hours */
#include <stdio.h>
#define SECS_PER_MINUTE 60
#define SECS_PER_HOUR 3600

unsigned seconds, minutes, hours, secs_left, mins_left;

int main(void)
{
  printf("Number of seconds (<65000): ");
  scanf("%d", &seconds);

  hours = seconds / SECS_PER_HOUR;
  minutes = seconds / SECS_PER_MINUTE;
  mins_left = minutes % SECS_PER_MINUTE;
  secs_left = seconds % SECS_PER_MINUTE;

  printf("%d hours, %d minutes, %d seconds\n", hours, mins_left, secs_left);

  return 0;
}
