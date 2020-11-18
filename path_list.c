#include "awshell.h"

/**
 * get_env - get the environment
 * @av: string where the enviroment is
 * Return: 0 on succces
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
p_list *path_list(char **env)
{
	char *name = "PATH";
	int i = 0, j = 0;
	char **temp = NULL, **temp2 = NULL;
	p_list *head;
	head = NULL;

	printf("Llego aqui\n");
	while (env[i] != NULL)
	{
		temp = split_str(env[i], "=");
	
		if (strcmp(temp[0], name) == 0)
		{
			temp2 = split_str(temp[1], ":");
			while (temp2[j] != NULL)
			{
				printf("Algo: %s\n", temp2[j]);
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
	return (head);
}
