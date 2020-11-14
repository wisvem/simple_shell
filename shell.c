#include "awshell.h"

/**
 * main - prints "aw$ ", wait for the user to enter a command,
 * to execute different programs.
 * @argc: number of argurments
 * @argv: arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char *buff = NULL;
	size_t len = 0;
	int x = 0;
	(void)argc, (void)argv;

	write(STDOUT, "aw$: ", 5);
	while ((x = getline(&buff, &len, stdin)) != -1)
	{
		buff[x - 1] = '\0';
		exec(split_str(buff, " "));
		write(STDOUT, "aw$: ", 5);
	}
	write(STDOUT, "\n", 1);
	free(buff);
	return (0);
}
