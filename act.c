#include "hsh.h"

/**
 * active - UNIX command line interpreter
 *
 * Return: void
 */
void active(void)
{
	char *in;
	char **arg;
	int status;

	status = -1;

	do {
		write(STDOUT_FILENO, "$ ", 2);
		in = get_line();
		arg = split(in);
		status = exec(arg);
		free(in);
		free(arg);
		if (status >= 0)
			exit(status);
	} while (status == -1);
}
