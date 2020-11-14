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
		printf("%s\n", environ[i]);
		i++;
	}
	printf("%p\n", env);
	printf("PATH : %s\n", getenv("PATH"));
	return (0);
}

char *_getenv(const char *name)
{
	int i = 0;

	extern char **environ;
	while (environ[i] != NULL)
	{
		strstr(environ[i]
	}
	printf("PATH : %s\n", getenv(name));

}
