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

/* shortened variables */
#define STDERR STDERR_FILENO
#define STDOUT STDOUT_FILENO
#define STDIN STDIN_FILENO
/* end of shortened */

/**
 * struct builtins - struct with type to find builtins and function to use
 * @name: string to compare
 * @function: printing function associated
 */

typedef struct builtins
{
	char *name;
	int (*function)();
} builtins_t;

/**
 * struct path_list - linked list with the path of executables
 * @str: string
 * @next: pointer
 */

typedef struct path_list
{
	char *str;
	struct path_list *next;
} p_list;


/* string manipulation functions */
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
char **split_str(char *str, char *delim);
char *_strchr(char *s, char c);

int exec(char **argv);
char *get_env(char *str);
void ctrap(int signal);

/*Built-in functions*/
int _env(int ac, char **av, char **env);
int exitshell(void);
int _setenv(void);
int _unsetenv(void);
int _setenv(void);
int _help(void);
int (*get_builtins(char *string))(void);

/* list manipulation functions */
void free_list(p_list *head);
p_list *add_list(p_list **head, const char *str);
#endif /* AWSHELL */
