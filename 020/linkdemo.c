/* Demos a simple linked list. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
	char name[20];
	struct person *next;
};

struct person create_person(char name[20]);

int main(void)
{
	struct person *head = NULL;
	struct person *new = NULL;
	struct person *current = NULL;

	/* Add an element to the beginning */
	new = malloc(sizeof(struct person));
	strcpy(new->name, "Abigal");
	new->next = NULL;
	head = new;

	/* Find the end of the list */
	current = head;
	while (current->next != NULL)
		current = current->next;

	/* Add an element to the end of the list */
	new = malloc(sizeof(struct person));
	strcpy(new->name, "Carolyn");
	new->next = NULL;
	current->next = new;

	/* Insert an element in the middle of the list */
	new = malloc(sizeof(struct person));
	strcpy(new->name, "Beatrice");
	new->next = head->next;
	head->next = new;

	/* Print the names in order */
	current = head;
	while (current != NULL) {
		printf("%s\n", current->name);
		current = current->next;
	}

	return 0;
}
