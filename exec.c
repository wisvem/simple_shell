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
int exec(char **argv)
{
	pid_t child_pid;
	int child_status, i = 0;

	child_pid = fork();
	if (child_pid == 0)
	{
		if ((execve(argv[0], argv, NULL) == -1) && argv[0] != NULL)
		{
			printf("%s: command not found\n", argv[0]);
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
	while (argv[i])
	{
		free(argv[i]), i++;
	}
	free(argv);
	return (0);
}
