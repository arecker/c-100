#include <stdarg.h>
#include <stdio.h>

float average(int num, ...);

int main(void)
{
	printf("The first average is %.2f\n",
		average(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10));
	printf("The second average is %.2f\n",
		average(5, 121, 206, 76, 31, 5));
	return 0;
}

float average(int num, ...)
{
	int total = 0;
	va_list argptr;
	va_start(argptr, num);
	for (int i = 0; i < num; i++)
		total += va_arg(argptr, int);
	va_end(argptr);
	return (float) total / num;
}
