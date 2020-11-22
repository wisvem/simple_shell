#include "awshell.h"

/**
 * main - prints "aw$ ", wait for the user to enter a command,
 * to execute different programs.
 * @ac: number of arguments.
 * @av: arguments.
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
	char *buff = NULL, *buff_w = NULL, **buff_split = NULL;
	char *cmd;
	size_t len = 0;
	int x = 0;

	(void)ac, (void)av;
	if (isatty(STDIN) != 0)
		write(STDOUT, "\033[94maw$: \033[0m", 15);
	signal(SIGINT, ctrap);
	while ((x = getline(&buff, &len, stdin)) != -1)
	{
		buff[x - 1] = '\0';
		buff_split = split_str(buff, " ");
		buff_w = buff_split[0];
		cmd = _which(buff_w);
		if ((cmd != NULL) && (_strcmp(cmd, buff_w) != 0))
		{
			buff_split[0] = NULL;
			buff_split[0] = malloc(sizeof(char) * (_strlen(cmd) + 1));
			if (buff_split[0])
				buff_split[0] = _strdup(cmd);
		}
		if (get_builtins(buff, buff_split) != 0)
			exec(buff_split);
		if (isatty(STDIN) != 0)
			write(STDOUT, "\033[94maw$: \033[0m", 15);
	}
	if (isatty(STDIN) != 0)
		write(STDOUT, "\n", 1);
	/*free(buff);*/
	free(buff_w);
	free(buff_split);
	return (0);
}
