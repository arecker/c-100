/* Demonstrate time functions */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void)
{
	time_t start = time(0);

	/* record the current time */
	time_t now;
	time(&now);		/* alternate form of time(0) */

	/* convert time-t value into a type tm struct */
	struct tm *ptr = localtime(&now);

	/* create and display a formatted time string */
	printf("%s", asctime(ptr));

	printf("Sleeping");
	for (int i = 0; i < 5; i++) {
		fflush(stdout);
		printf(".");
		sleep(1);
	}

	/* Calculate running time of program */
	time_t finish = time(0);
	printf("\nProgram execution: %f s.\n", difftime(finish, start));

	return 0;
}
