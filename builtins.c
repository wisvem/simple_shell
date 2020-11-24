#include "awshell.h"

/**
 * _env - prints the environment
 * @ptr: buffer tokenized to free
 * Return: Always 0.
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
int _env(char **ptr)
{
	unsigned int i = 0, size = 0;

	while (environ[i])
	{
		size = _strlen(environ[i]);
		write(STDOUT, environ[i], size);
		write(STDOUT, "\n", 1);
		i++;
	}
	i = 0;
	free_double(ptr);
	return (0);
}

/**
 * exitshell - exits the shell
 * @buff: name of the environment var to free
 * @buff_w: copy name of the environment var to free
 * @buff_split: buffer tokenized to free
 * Return: Always 0.
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
int exitshell(char **buff_split, char *buff, char *buff_w)
{
	(void)buff_split;
	(void)buff;
	(void)buff_w;
	free_single(buff);
	free_double(buff_split);
	exit(EXIT_SUCCESS);
}

/**
 * _setenv - exits the shell
 * @ptr: buffer tokenized to free
 * Return: Always 0.
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
int _setenv(char **ptr)
{
	free_double(ptr);
	printf("_help Work in progress\n");
	return (0);
}

/**
 * _unsetenv - exits the shell
 * @ptr: buffer tokenized to free
 * Return: Always 0.
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
int _unsetenv(char **ptr)
{
	free_double(ptr);
	printf("_help Work in progress\n");
	return (0);
}


/**
 * _help - exits the shell
 * @ptr: buffer tokenized to free
 * Return: Always 0.
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
int _help(char **ptr)
{
	free_double(ptr);
	printf("_help Work in progress\n");
	return (0);
}
