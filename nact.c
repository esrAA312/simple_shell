#include "hsh.h"

/**
 * none_active - unix command line interpreter
 *
 * Return: void
 */
void none_active(void)
{
	char *in;
	char **arg;
	int status = -1;

	do {
		in = re();
		arg = split(in);
		status = exec(arg);
		free(in);
		free(arg);
		if (status >= 0)
		{
			exit(status);
		}
	} while (status == -1);
}

