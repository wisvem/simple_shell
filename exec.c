#include "awshell.h"

/**
* exec - executes applications
* @buff_splt: arguments to execute
* @counter: counting of every command typed
* @shellav: name of the first argument non interactive
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
int exec(char **buff_splt, unsigned int counter, char *shellav)
{
	pid_t child_pid;
	int child_status, error_code;
	char *path = NULL;
	char *c_counter = NULL;

	(void)test;
	if ((_which(buff_splt[0]) == NULL) && buff_splt[0] != NULL)
	{
		c_counter = itos(counter);
		print_error(c_counter, buff_splt[0], shellav);
		free_single(c_counter), free_double(buff_splt);
		return (127);
	}
	child_pid = fork();
	if (child_pid == 0)
	{
		path = _which(buff_splt[0]);
		if ((execve(path, buff_splt, environ) == -1) && buff_splt[0] != NULL)
		{
			c_counter = itos(counter);
			execve(buff_splt[0], buff_splt, environ);
			print_error(c_counter, buff_splt[0], shellav);
			free_single(c_counter), exit(errno);
		}
		else
			exit(errno);
	}
	else if (child_pid < 0)
		return (errno);
	wait(&child_status);
	if (WIFEXITED(child_status))
		error_code = WEXITSTATUS(child_status);
	free_double(buff_splt);
	return (error_code);
}
