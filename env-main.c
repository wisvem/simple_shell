#include "awshell.h"

/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
	extern char **environ;
	unsigned int i;
	(void)ac, (void)av;

	i = 0;
	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
	i = 0;
	printf("\n--------------\n");
	while (environ[i] != NULL)
	{
		printf("---\n%s\n---\n", environ[i]);
		i++;
	}
	printf("LS_COLORS : %s\n", getenv("LS_COLORS"));
	return (0);
}
