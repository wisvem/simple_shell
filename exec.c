#include "awshell.h"

/**
* exec - executes applications
* @argv: arguments to execute
* Return: 0 on success
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
int exec(char **argv, unsigned int counter)
{
	pid_t child_pid;
	int child_status;
	char *path = NULL;
	char *c_counter = itos(counter);

	child_pid = fork();
	if (child_pid == 0)
	{
		path = _which(argv[0]);
		if ((execve(path, argv, environ) == -1) && argv[0] != NULL)
		{
			execve(argv[0], argv, environ);
			write(STDERR, "hsh: ", 5);
			write(STDERR, c_counter, _strlen(c_counter));
			write(STDERR, ": ", 2);
			write(STDERR, argv[0], _strlen(argv[0]));
			write(STDERR, ": not found\n", 12);
		}
		exit(EXIT_FAILURE);
	}
	else if (child_pid < 0)
	{
		perror("Failed to fork\n");
		return (-1);
	}
	else
	{
		wait(&child_status);
	}
	free_double(argv);
	return (0);
}
