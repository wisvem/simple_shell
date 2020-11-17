#include "awshell.h"

/**
 * _env - prints the environment
 *
 * Return: Always 0.
 */
int _env(int ac, char **av, char **env)
{
	unsigned int i;
	(void)ac, (void)av;

	i = 0;
	while (env[i])
	{
		printf("%s\n", env[i]);
		i++;
	}
	i = 0;
	return (0);
}
