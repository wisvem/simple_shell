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

int exec(char **argvx)
{

	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

	pid_t child_pid;
	int child_status, i;
	pid_t dad_pid;

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
	printf("Padre: %u e hijo: %u\n", dad_pid, child_pid);
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

	write(STDOUT, "aw$ ", 4);
	while (getline(&buff, &len, stdin) != -1)
	{
		exec(divide_string(buff));
		write(STDOUT, "aw$ ", 4);
	}
	printf("\n");
	free(buff);
	return (0);
}
