#include "hsh.h"
/**
* ex_it - causes normal process termination
 * @exit_args: empty args
 *
 * Return: 0 to terminate the process
 */
int ex_it(char **exit_args)
{
	int status =  EXIT_SUCCESS;

	if (exit_args[1])
	{
		if (exit_args[1][0] == '-')
		{error_ex(exit_args[1]);
			free(exit_args);
			exit(2); }
		else if (exit_args[1][0] >= 'a' && exit_args[1][0] <= 'z')
		{ error_ex(exit_args[1]);
			free(exit_args);
			exit(2); }
		else if (exit_args[1][0] >= 'A' && exit_args[1][0] <= 'Z')
		{ error_ex(exit_args[1]);
			free(exit_args);
			exit(2); }
		else
		{ status = _atoi(exit_args[1]);
			free(exit_args);
			exit(status); }}

	free(exit_args);
	exit(0);
}
