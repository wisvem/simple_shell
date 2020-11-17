#ifndef AWSHELL_H
#define AWSHELL_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <signal.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>

/* Shorten variables */
#define STDERR STDERR_FILENO
#define STDOUT STDOUT_FILENO
#define STDIN STDIN_FILENO
/*End of shorten*/.

typedef struct builtins
{
	char *name;
	void (*function)();
}builtins_t

/* Path structure*/

typedef struct path_list
{
	char *str;
	struct path_list *next;
} p_list;


/*string manipulationfunctions*/
char *_strdup(char *str);
char **split_str(char *str, char *delim);
char *_strchr(char *s, char c);

int exec(char **argv);
char *get_env(char *str);
void ctrap(int signal);

/*List manipulation functions*/
void free_list(p_list *head);
p_list *add_list(p_list **head, const char *str);
#endif /* AWSHELL */
