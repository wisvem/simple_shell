#include "awshell.h"

/**
* get_env - get the environment
* @str: string where the enviroment is
* Return: 0 on succces
**/
int get_env(char *av)
{
	char *name = _strdup(av);
	int i = 0, j = 0;
	extern char **environ;
	char **temp = NULL, **temp2 = NULL;
	p_list *head;
	
	head = NULL;
	(void)av;

	while (environ[i] != NULL)
	{
		temp = split_str(environ[i], "=");
		if (strcmp(temp[0], name) == 0)
		{
			temp2 = split_str(temp[1], ":");
			while (temp2[j] != NULL)
			{
				/*printf("%s\n", temp2[j]);*/
				add_list(&head, temp2[j]);
				free(temp2[j]);
				j++;
			}
			free(temp2);
			j = 0;
		}
		while (temp[j] != NULL)
		{
			free(temp[j]);
			j++;
		}
		free(temp);
		j = 0;
		i++;
	}
	free(name);
	free_list(head);
	return(0);
}
