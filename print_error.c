#include "awshell.h"

void print_error(char *c_counter, char *argv0)
{
	write(STDERR, "hsh: ", 5);
	write(STDERR, c_counter, _strlen(c_counter));
	write(STDERR, ": ", 2);
	write(STDERR, argv0, _strlen(argv0));
	write(STDERR, ": not found\n", 12);
}
