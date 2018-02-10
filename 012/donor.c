#include <stdio.h>

#define NAME_SIZE 10

struct donor {
  char first_name[NAME_SIZE];
  char last_name[NAME_SIZE];
  float amount;
};

struct donor get_donor(void);
void display_donor(struct donor d);

int main(void) {
  struct donor d = get_donor();
  display_donor(d);
  return 0;
}

struct donor get_donor(void) {
  struct donor d;
  printf("Name (first last): ");
  scanf("%s %s", (char *) &d.first_name, (char *) &d.last_name);
  printf("Amount: ");
  scanf("%f", &d.amount);
  return d;
}

void display_donor(struct donor d) {
  printf("%s %s donated $%.2f\n", d.first_name, d.last_name, d.amount);
  return;
}
