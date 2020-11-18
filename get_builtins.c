#include "awshell.h"
/**
 * get_builtins - checks if the input command is a builtin
 * @av: variables
 * Return: pointer to the function or NULL if it fails
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
int (*get_builtins(char *string))(void)
{
	unsigned int i, x;
	builtins_t commands[] = {
		{"exit", exitshell},
		{"env", _env},
		{"setenv", _setenv},
		{"unsetenv", _unsetenv},
		{"help", _help},
		{NULL, NULL}
	};

	for (i = 0; commands[i].name; i++)
	{
	
		x = _strcmp(string, commands[i].name);
	
		if (x == 0)
		{	
			return (commands[i].function);
		}
	}
	return (NULL);
}
