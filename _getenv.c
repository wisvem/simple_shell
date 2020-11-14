#include "awshell.h"

int main(int ac, char **av)
{
	char *name = strdup(av[1]);
//	extern char **environ;

	while (environ[i] != NULL)
	{
		if (strcmp(name, strstr(environ[i])) == 0)
		{
			// obtener el primer string del substring env(i)(j)
			// comparar con la varibale name
			// Si ambas son iguales imprimir el resto de el string en la pcision i
		}
	}

	
	printf("%s : %s\n",name, getenv(name));
	return(0);
}
