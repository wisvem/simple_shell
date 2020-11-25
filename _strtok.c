#include "awshell.h"
/**
 * _strtok - concatenates two strings
 * @str: destiny string
 * @delim: source string
 * Return: a pointer to the next token, NULL if fails
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
char *_strtok(char *str, char *delim)
{
	static char *token;
	char *r_string = NULL;
	unsigned int i = 0, j, ctr = 0;

	if (!delim || (!str && !token))
		return (0);
	if (str)
		r_string = _strdup(str);
	if (!str)
		r_string = token;
	while (r_string[i] == delim[0])
		i++;
	for (j = i; r_string[j]; j++)
	{
		if (r_string[j] == delim[0])
		{
			ctr = 1;
			break;
		}
	}
	for ( ; r_string[j]; j++)
		if (r_string[j] != delim[0])
			break;
		else if (r_string[j + 1] == '\0')
		{
			r_string[j] = '\0';
			ctr = 0;
			break;
		}
		else
			r_string[j] = '\0';
	if (!ctr)
	{
		token = NULL;
		return (r_string + i);
	}
	if (*(r_string + j) != '\0')
		token = r_string + j;
	else
		token = '\0';
	return (r_string + i);
}
