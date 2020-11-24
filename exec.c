#include "awshell.h"

/**
* exec - executes applications
* @argv: arguments to execute
* @counter: counting of every command typed
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
int exec(char **argv, unsigned int counter, char *shellav)
{
	pid_t child_pid;
	int child_status, error_code;
	char *path = NULL;
	char *c_counter = NULL;

	if ((_which(argv[0])) == NULL)
	{
		c_counter = itos(counter);
		print_error(c_counter, argv[0], shellav);
		free_double(argv);
		free_single(c_counter);
		return (127);
	}
	child_pid = fork();
	if (child_pid == 0)
	{
		path = _which(argv[0]);
		if ((execve(path, argv, environ) == -1) && argv[0] != NULL)
		{
			c_counter = itos(counter);
			execve(argv[0], argv, environ);
			print_error(c_counter, argv[0], shellav);
			free_single(c_counter);
			exit(errno);
		}
		else
			exit(errno);
	}
	else if (child_pid < 0)
		return (errno);
	wait(&child_status);
	if (WIFEXITED(child_status))
		error_code = WEXITSTATUS(child_status);
	free_double(argv);
	return (error_code);
}
