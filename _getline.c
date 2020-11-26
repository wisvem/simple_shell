#include "awshell.h"
/**
 * _getline - custom getline
 * @lineptr: variable to store the addres of the buffer
 * @n: size in bytes
 * @stream: buffer to be read
 * Return: Numbers character read
 */
int _getline(char **lineptr, size_t *n, FILE *stream)
{
	return (getline(lineptr, n, stream));
}
