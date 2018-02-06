#include <stdio.h>

float add_year_total(int length, float expenses[]);

int main(void) {

  int counter = 0;
  float expenses[12];

  printf("Enter expenses\n");

  for (counter = 0; counter < 12; counter++) {
    printf("Month %d: ", counter + 1);
    scanf("%f", &expenses[counter]);
  }

  printf("Year Total: %.2f\n", add_year_total(12, expenses));

  return 0;

}

float add_year_total(int length, float expenses[]) {

  float total = 0;

  for (int i = 0; i < length; i++) {
    total += expenses[i];
  }

  return total;

}
