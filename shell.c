#include "awshell.h"
/**
* _strlen - calculate lenght of a string
* @s: char vector
* Return: the lenght of @s
**/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char **divide_string(char *str)
{
	char *token, *token2, *str2;
	int words = 0, i = 0;
	char **wordarray;

	str2 = _strdup(str);
	token = strtok(str, " ");

	while(token != NULL)
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
	wordarray[i] = NULL;
	free(str2);
	return (wordarray);
}

int exec(char **argv)
{

	//char *argv[] = {"/bin/ls"};

	pid_t child_pid;
	int child_status, i = 0, j = 0;
	pid_t dad_pid;

/*
*	for (i = 0; argv[i] != NULL; i++)
*	{
*
* printf("# Argument: %i: String:  %s\n", i, argv[i]);
*		while (argv[i][j])
*		{
*			j++;
*		}
*		printf("Size: %d\n", j);
*		j = 0;
*	}
*	
*	printf("# Argument: %i: String:  %s\n", i, argv[i]);
*/	
	i = 0;
	child_pid = fork();
	if (child_pid == 0)
	{
		execve(argv[0], argv, NULL);
		exit(EXIT_FAILURE);
	}
	else if (child_pid < 0)
	{
		perror("Falied to fork\n");
		return(-1);
	}
	else
	{
		wait(&child_status);
	}
	dad_pid = getppid();
//	printf("Padre: %u e hijo: %u\n", dad_pid, child_pid);
	return (0);
}

/**
 * main - prints "$ ", wait for the user to enter a command,
 * prints it on the next line
 * Return: Always 0
 */

int main(void)
{
	char *buff = NULL;
	size_t len = 0;
	size_t x = 0;

	write(STDOUT, "PROMPT$: ", 9);
	while ((x = getline(&buff, &len, stdin)) != -1)
	{
		buff[x - 1] = '\0';
		exec(divide_string(buff));
		write(STDOUT, "PROMPT$: ", 9);
	}
	write(STDOUT, "\n", 1);
	free(buff);
	return (0);
}
