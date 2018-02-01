/* Displays sizes of different types */
#include <stdio.h>

int main(void)
{
  printf("char: %d bytes\n", (int) sizeof(char));
  printf("int: %d bytes\n", (int) sizeof(int));
  printf("short: %d bytes\n", (int) sizeof(short));
  printf("long: %d bytes\n", (int) sizeof(long));
  printf("long long: %d bytes\n", (int) sizeof(long long));
  printf("unsigned char: %d bytes\n", (int) sizeof(unsigned char));
  printf("unsigned int: %d bytes\n", (int) sizeof(unsigned int));
  printf("unsigned short: %d bytes\n", (int) sizeof(unsigned short));
  printf("unsigned long: %d bytes\n", (int) sizeof(unsigned long));
  printf("unsigned long long: %d bytes\n", (int) sizeof(unsigned long long));
  printf("float: %d bytes\n", (int) sizeof(float));
  printf("double: %d bytes\n", (int) sizeof(double));
  printf("long double: %d bytes\n", (int) sizeof(long double));
  return 0;
}
