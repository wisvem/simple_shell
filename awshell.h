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
	char *path;
	struct next;
} p_list;

char *_strdup(char *str);
char **split_str(char *str, char *delim);
int exec(char **argv);
int get_env(char *av);
#endif /* AWSHELL */
