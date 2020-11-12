#include "awshell.h"

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};
	pid_t child_pid;
	int child_status, i;
	pid_t dad_pid;

	for (i = 0; i < 5; i++)
	{
		child_pid = fork();
		if (child_pid == 0)
		{
			execve(argv[0], argv, NULL);
			exit(EXIT_FAILURE);
		}
		else if (child_pid < 0)
		{
			perror("Falied to fork\n");
			return(-1);
		}
		else
		{
			wait(&child_status);
		}
		dad_pid = getppid();
		printf("Padre: %u e hijo: %u\n", dad_pid, child_pid);
	}
	printf("%s\n", argv[0]);
	return (0);
}
