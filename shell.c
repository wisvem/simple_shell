#include "awshell.h"

/**
 * main - prints "aw$ ", wait for the user to enter a command,
 * to execute different programs.
 * Return: Always 0
 *                     _
 *     /\             | |
 *    /  \   _ __   __| |_   _
 *   / /\ \ | '_ \ / _` | | | |
 *  / ____ \| | | | (_| | |_| |
 * /_/    \_\_|_|_|\__, |\__, | _   _
 * \ \        / (_)   | | __/ || \ | |
 *  \ \  /\  / / _ ___| ||___/ |  \| |
 *   \ \/  \/ / | / __| __/ _ \| . ` |
 *    \  /\  /  | \__ \ || (_) | |\  |
 *     \/  \/   |_|___/\__\___/|_| \_| |- Nov 2020 -|
 *
 */
int main(int ac, char *av[])
{
	char *buff = NULL;
	size_t len = 0;
	int x = 0;

	(void)ac, (void)av;
	if (isatty(STDIN) != 0)
	{
		write(STDOUT, "\033[94maw$: \033[0m", 15);
	}
	signal(SIGINT, ctrap);
	while ((x = getline(&buff, &len, stdin)) != -1)
	{
		buff[x - 1] = '\0';
		if (get_builtins(buff) != 0)
			exec(split_str(buff, " "));
		if (isatty(STDIN) != 0)
		{
			write(STDOUT, "\033[94maw$: \033[0m", 15);
		}
	}
	if (isatty(STDIN) != 0)
	{
		write(STDOUT, "\n", 1);
	}
	free(buff);
	return (0);
}
