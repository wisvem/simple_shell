#include "awshell.h"

/**
 * get_env - get the environment
 * @av: string where the enviroment is
 * Return: 0 on succces
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
p_list *path_list(char *envname, char **env)
{
	char *env_value;
	char **entries;
	int i = 0;
	p_list *head;

	env_value = get_env(envname, env);
	entries = split_str(env_value, ":");
	while(entries[i] != NULL)
	{
		add_list(&head, entries[i]);
		i++;
	}
	i = 0;
	while (entries[i] != NULL)
	{
		free(entries[i]);
		i++;
	}
	free(entries);
	return(head);
}
