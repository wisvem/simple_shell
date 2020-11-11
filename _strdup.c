#include <stdlib.h>
#include "awshell.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: string
* Return: a copy of str
**/
char *_strdup(char *str)
{
	unsigned int i = 0, j;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
