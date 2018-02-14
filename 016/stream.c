#include <stdio.h>

/*
 * Apparently `gets` is bad.  It was officially removed from
 * ANSI C.  `fgets` is the same thing, but you have to specify
 * size.
 * https://stackoverflow.com/a/1694042
 */

int main(void)
{
	char buffer[256];
	puts(fgets(buffer, 256, stdin));
	return 0;
}
