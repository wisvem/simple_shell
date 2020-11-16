#include "awshell.h"

/**
 * main - prints "aw$ ", wait for the user to enter a command,
 * to execute different programs.
 * @argc: number of argurments
 * @argv: arguments
 * Return: Always 0
 */
int main(void)
{
	char *buff = NULL;
	size_t len = 0;
	int x = 0;

	if (isatty(STDIN) != 0)
	{
		write(STDOUT, "aw$: ", 5);
	}
	while ((x = getline(&buff, &len, stdin)) != -1)
	{
		buff[x - 1] = '\0';
		exec(split_str(buff, " "));
		if (isatty(STDIN) != 0)
		{
			write(STDOUT, "aw$: ", 5);
		}
	}
	if (isatty(STDIN) != 0)
	{
		write(STDOUT, "\n", 1);
	}
	free(buff);
	return (0);
}
