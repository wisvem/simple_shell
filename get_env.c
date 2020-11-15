#include "awshell.h"

int get_env(char *av)
{
	char *name = _strdup(av); /*CHange function*/
	int i = 0;
	extern char **environ;
	char **temp = NULL;
	(void)av;

	while (environ[i] != NULL)
	{
		temp = split_str(environ[i], "=");
		if (strcmp(temp[0], name) == 0)
		{
			printf("%s : %s", temp[0], temp[1]);
		}
		i++;
	}
	return(0);
}
