#ifndef AWSHELL_H
#define AWSHELL_H

#include "_printf.a"
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

char *_strdup(char *str);
char **divide_string(char *str);
int _strlen(char *s);
#endif /* AWSHELL */
