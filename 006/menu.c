#include <stdio.h>

int get_menu_choice(void);

int main(void) {
  int choice;
  choice = get_menu_choice();
  printf("Your choice: %d\n", choice);
  return 0;
}

int get_menu_choice(void) {
  int selection = 0;

  do {
    printf("1: Add a record\n");
    printf("2: Delete a record\n");
    printf("3: Edit a record\n");
    printf("4: View a record\n");
    printf("Choice: ");
    scanf("%d", &selection);
  } while (selection < 1 || selection > 4);

  return selection;
}
