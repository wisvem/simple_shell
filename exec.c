#include "awshell.h"

/**
* exec - executes applications
* @argv: arguments to execute
* Return: 0 on success
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
		perror("Falied to fork\n");
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
