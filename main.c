#include "awshell.h"


int main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("This function only accepts one argument\n");
		return (0);
	}
	printf("%s\n", get_env(av[1]));
	return(0);
}
