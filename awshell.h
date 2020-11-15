#ifndef AWSHELL_H
#define AWSHELL_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>

/* Shorten variables */
#define STDERR STDERR_FILENO
#define STDOUT STDOUT_FILENO
#define STDIN STDIN_FILENO
/*End of shorten*/

/* Path structure*/

typedef struct path_list
{
	char *str;
	struct path_list *next;
} p_list;

char *_strdup(char *str);
char **split_str(char *str, char *delim);
int exec(char **argv);
int get_env(char *av);

/*List's functions*/
void free_list(p_list *head);
p_list *add_list(p_list **head, const char *str);
#endif /* AWSHELL */
