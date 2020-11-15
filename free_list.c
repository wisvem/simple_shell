#include "awshell.h"

/**
* free_list - frees a list
* @head: head of the list
**/
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