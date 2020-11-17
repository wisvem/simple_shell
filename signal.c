#include "awshell.h"

/*signal handler*/
void ctrap(int signal)
{
	(void)signal;
	write(STDOUT, "\n\033[96maw$: \033[0m", 15);
}
