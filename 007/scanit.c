#include <stdio.h>

#define QUIT 4

int get_menu_choice(void);

int main(void) {

  int choice = 0;
  int int_var = 0;
  float float_var = 0.0;
  unsigned unsigned_var = 0;

  while (choice != QUIT) {

    choice = get_menu_choice();

    if (choice == 1) {
      printf("Enter a signed decimal int: ");
      scanf("%d", &int_var);
    } else if (choice == 2) {
      printf("Enter a decimal floating number: ");
      scanf("%f", &float_var);
    } else if (choice == 3) {
      printf("Enter an unsigned decimal integer: ");
      scanf("%u", &unsigned_var);
    }

  }

  printf("Here were your choices.\n");
  printf("int: %d\n", int_var);
  printf("float: %f\n", float_var);
  printf("unsigned: %u\n", unsigned_var);

  return 0;

}

int get_menu_choice(void) {

  int choice = 0;

  do {
    printf("Select choice.\n");
    printf("1 - get signed decimal integer\n");
    printf("2 - get decimal floating point number\n");
    printf("3 - Get an unsigned decimal integer\n");
    printf("%d - Quit\n", QUIT);
    printf("Choice: ");
    scanf("%d", &choice);
  } while (choice < 1 || choice > QUIT);

  return choice;

}
