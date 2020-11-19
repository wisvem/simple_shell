#include "awshell.h"

/**
 * main - stat example
 * @ac: amount of arguments
 * @excname: arguments
 * Return: Always 0.
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
int _which(char *excname, char **env)
{
	struct stat st;
	/*char *ppen; path + excutable name*/
	p_list *head, *copyhead;
	unsigned int size;
	char *fullpath;

	head = path_list(PATH, env);
	copyhead = head;


	while (copyhead)
	{
		size = 1 + _strlen(excname) +_strlen((*copyhead).str);
		fullpath = malloc(sizeof(char) * size);
		fullpath = _strdup((*copyhead).str);
		fullpath = _strcat(excname, fullpath);

		printf("%s\n", fullpath);
		
		if (stat(fullpath, &st) == 0)
		{
			printf(" FOUND\n");
		}
		else
		{
			printf(" NOT FOUND\n");
		}

		free(fullpath);
	}

	return (0);
}
