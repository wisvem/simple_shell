#include "awshell.h"

/**
 * free_list - frees a list
 * @head: head of the list
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
void free_list(p_list *head)
{
	p_list *temp;

	while (head != NULL)
	{
		temp = (*head).next;
		free((*head).str);
		free(head);
		head = temp;
	}
	head = NULL;
}
