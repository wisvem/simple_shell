#include "awshell.h"

char **divide_string(char *str)
{
	char *token, *token2;
	char *str2 = _strdup(str);
	int words = 0, i = 0;
	char **wordarray;

	token = strtok(str, " ");

	while( token != NULL )
	{
		token = strtok(NULL, " ");
		words++;
	}

	token2 = strtok(str2, " ");

	wordarray = malloc(sizeof(char *) * (words + 1));
	
	while (token2 != NULL)
	{
		wordarray[i] = _strdup(token2);
		token2 = strtok(NULL, " ");
		i++;
	}
	free(str2);
	return (wordarray);
}
