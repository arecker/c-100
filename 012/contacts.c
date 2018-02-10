/* Prompt for 3 contacts, then display their info */
#include <stdio.h>

struct contact {
  char fname[20];
  char lname[20];
  char phone[13];
};

struct contact read_contact(int index);
void display_friends(struct contact friends[], int count);

int main(void) {
  struct contact friends[3];

  for (int i = 0; i < 3; i++)
    friends[i] = read_contact(i + 1);

  display_friends(friends, 3);

  return 0;
}

struct contact read_contact(int index) {
  struct contact c;

  printf("Friend #%d first name: ", index);
  scanf("%s", (char *) &c.fname);

  printf("Friend #%d last name: ", index);
  scanf("%s", (char *) &c.lname);

  printf("Friend #%d phone number: ", index);
  scanf("%s", (char *) &c.phone);

  return c;
}

void display_friends(struct contact friends[], int count) {
  printf("First Name\t\tLast Name\t\tPhone Number\n");
  for (int i = 0; i < count; i++)
    printf("%s\t\t\t%s\t\t\t%s\n",
	   friends[i].fname, friends[i].lname, friends[i].phone);
  return;
}
