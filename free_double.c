#include "awshell.h"

/**
 * free_double - frees a double pointer
 * @argv: pointer to free.
 * Return: Always 0
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
 */
void free_double(char **ptr)
{
	int i;

	for(i = 0; ptr[i]; i++)
		free(ptr[i]);
	free(ptr);
}
