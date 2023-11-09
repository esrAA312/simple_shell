#include "hsh.h"

/**
 * exec - map if command is a builtin or a process
 * @arg: command and its flags
 *
 * Return: 1 on sucess, 0 otherwise
 */
int exec(char **arg)
{
	char *builtin[] = {
		"env",
		"exit",
		"cd"
	};
	int (*address[])(char **) = {
		&env,
		&ex_it,
		&cd
	};
	unsigned long int g = 0;

	if (arg[0] == NULL)
	{
		return (-1);
	}
	for (; g < sizeof(builtin) / sizeof(char *); g++)
	{
		if (_strcmp(arg[0], builtin[g]) == 0)
		{
			return ((*address[g])(arg));
		}
	}
	return (proc(arg));
}
