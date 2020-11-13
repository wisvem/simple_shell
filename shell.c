#include "awshell.h"

/**
 * divide_string - separates strings into words
 * @str: string to divide
 * Return: pointers to each word on the array
 */

char **divide_string(char *str)
{
	char *token, *token2, *str2;
	int words = 0, i = 0;
	char **wordarray;

	str2 = _strdup(str);
	token = strtok(str, " ");

	while (token)
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

/**
 * exec - executes applications
 * @argv: arguments to execute
 * Return: 0 on success
 */

int exec(char **argv)
{

	pid_t child_pid;
	int child_status, i = 0;

	child_pid = fork();
	if (child_pid == 0)
	{
		execve(argv[0], argv, NULL);
		exit(EXIT_FAILURE);
	}
	else if (child_pid < 0)
	{
		perror("Falied to fork\n");
		return (-1);
	}
	else
	{
		wait(&child_status);
	}
	while (argv[i])
		free(argv[i]), i++;
	free(argv);
	return (0);
}

/**
 * main - prints "aw$ ", wait for the user to enter a command,
 * to execute different programs.
 * Return: Always 0
 */

int main(void)
{
	char *buff = NULL;
	size_t len = 0;
	int x = 0;

	write(STDOUT, "aw$: ", 5);
	while ((x = getline(&buff, &len, stdin)) != -1)
	{
		buff[x - 1] = '\0';
		exec(divide_string(buff));
		write(STDOUT, "aw$: ", 5);
	}
	write(STDOUT, "\n", 1);
	free(buff);
	return (0);
}
