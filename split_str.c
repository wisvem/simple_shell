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
char **split_str(char *buffer, char *delim)
{
	char *token = NULL, *buff_copy = NULL;
/*	char *token2 = NULL;*/
	int i = 0;
	/*int words = 0, */
	char **wordarray = malloc(sizeof(char *) * BSIZE);

	buff_copy = _strdup(buffer);
	token = strtok(buff_copy, delim);
	while (token)
	{
		wordarray[i] = token;
		token = strtok(NULL, delim);
		i++;
		/*
		token = strtok(NULL, delim);
		words++;*/
	}
/*	token2 = strtok(buff_copy, delim);*/
/*	wordarray = malloc(sizeof(char *) * (words + 1));*/
/*	while (token2 != NULL)
	{
		wordarray[i] = _strdup(token2);
		token2 = strtok(NULL, delim);
		i++;
	}*/
	wordarray[i] = NULL;
	free_single(token);
	free_single(buff_copy);
	return (wordarray);
}
