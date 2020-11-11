#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - prints "$ ", wait for the user to enter a command,
 * prints it on the next line
 * Return: Always 0
 */

int main(void)
{
	char *buff = NULL;
	size_t len = 0;

	printf("$ ");
	getline(&buff, &len, stdin);
	printf("%s", buff);
	free(buff);
	return (0);
}
