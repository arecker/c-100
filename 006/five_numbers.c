#include <stdio.h>


int main(void) {
  int choices[5];
  int counter = 0, choice;

  printf("Enter 5 numbers.  Each must be greater than 1 and less than 10\n");

  while (counter < 5) {
    choice = 0;

    while (choice < 1 || choice > 10) {
      printf("\n%d: ", counter + 1);
      scanf("%d", &choice);
    }

    choices[counter] = choice;
    counter++;
  }

  printf("Here are your choices:\n");

  for (int i=0; i<5; i++) {
    printf("%d: %d\n", i, choices[i]);
  }
}
