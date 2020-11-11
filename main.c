#include "awshell.h"
int main(int argc, char *argv[])
{
	char **stream;
	int i = 0;
	(void)argc;

	stream = divide_string(argv[1]);
	while (stream[i] != NULL)
	{
		printf("%s\n", stream[i]);
		free(stream[i]);
		i++;
	}
	free(stream);
	return (0);
}
