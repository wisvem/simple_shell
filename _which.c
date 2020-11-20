#include "awshell.h"

/**
 * _which - stat example
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
char *_which(char *excname)
{
	struct stat st;
	p_list *head = NULL, *copyhead = NULL;
	unsigned int totalsize = 0, size1 = 0, size2 = 0;
	char *fullpath = NULL;

	if (stat(excname, &st) == 0 || !excname)
		return (excname);
	head = path_list(PATH);
	copyhead = head;
	size1 = _strlen(excname);
	while (copyhead != NULL)
	{
		size2 = _strlen((*copyhead).str);
		totalsize = size1 + size2;

		fullpath = malloc(sizeof(char) * (totalsize + 2));
		if (fullpath == NULL)
		{
			return (NULL);
		}

		_memcpy(fullpath, (*copyhead).str, size2);
		_memcpy(fullpath + size2, "/", 1);
		_memcpy(fullpath + size2 + 1, excname, size1 + 1);
		fullpath[totalsize + 2] = '\0';

		if (stat(fullpath, &st) == 0)
		{
			free(head);
			return (fullpath);
		}
		free(fullpath);
		copyhead = (*copyhead).next;
	}
	free_list(copyhead);
	free_list(head);
	return (NULL);
}
