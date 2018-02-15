#include <stdio.h>

void flush(void);

int main(void)
{
	int age;
	char name[50];
	puts("Enter your age");
	scanf("%d", &age);
	flush();
	puts("Enter your name");
	scanf("%s", name);
	printf("Name: %s\nAge: %d\n", name, age);
}

void flush(void)
{
	int c;
	while((c = getchar()) != '\n' && c != EOF);
}
