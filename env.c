#include "hsh.h"

/**
 * env - function that prints enviroment variables
 * @arg: arguments
 *
 * Return: 1 on success, 0 otherwise
 */
int env(char **arg)
{
	int x;
	(void)(**arg);

	for (x = 0; environ[x]; x++)
	{
		write(STDOUT_FILENO, environ[x], _strlen(environ[x]));
		write(STDOUT_FILENO, "\n", 1);
	}
	return (-1);
}
