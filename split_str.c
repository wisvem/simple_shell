#include "awshell.h"

/**
 * split_str - separates strings into words
 * @str: string to divide
 * @delim: delimiter
 * Return: pointers to each word on the array
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
char **split_str(char *str, char *delim)
{
	char *token, *token2, *str2;
	int words = 0, i = 0;
	char **wordarray;

	(void)test;
	str2 = _strdup(str);
	token = strtok(str, delim);
	while (token)
	{
		token = strtok(NULL, delim);
		words++;
	}
	token2 = strtok(str2, delim);

	wordarray = malloc(sizeof(char *) * (words + 1));
	while (token2 != NULL)
	{
		wordarray[i] = _strdup(token2);
		token2 = strtok(NULL, delim);
		i++;
	}
	wordarray[i] = NULL;
	free_single(token);
	free_single(token2);
	free_single(str2);
	return (wordarray);
}
