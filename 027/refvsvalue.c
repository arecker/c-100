#include <stdio.h>

void by_value(int a, int b, int c);
void by_ref(int *a, int *b, int *c);
void display(char *message, int a, int b, int c);

int main(void)
{
	int a = 1, b = 2, c = 3;
	display("Before calling by_value()", a, b, c);
	by_value(a, b, c);
	display("After calling by_value()", a, b, c);
	by_ref(&a, &b, &c);
	display("After calling by_ref()", a, b, c);
	return 0;
}

void by_value(int a, int b, int c)
{
	a = b = c = 0;
}

void by_ref(int *a, int *b, int *c)
{
	*a = *b = *c = 0;
}

void display(char *message, int a, int b, int c)
{
	printf("%s: a=%d b=%d c=%d\n", message, a, b, c);
}
