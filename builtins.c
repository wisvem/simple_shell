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
void (*get_builtins(built_t *av))
{
	unsigned int i;
	builtins_t builtins[] = {
		{"exit", exit},
		{"env", _env},
		{"setenv", _setenv},
		{"unsetenv", _unsetenv},
		{"help", _help},
		{NULL, NULL}
	};

	for (i = 0; get[i].function; i++)
	{
		if (_strcmp(builtins.av[0], get[i].name) == 0)
			return (builtins[i].function);
	}
	return (NULL);
}
