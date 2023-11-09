#include "hsh.h"

/**
 * get_line - read a line from stdin
 *
 * Return: pointer that points to a str with the line content
 */
char *get_line(void)
{
	char *in;
	size_t size;

	size = 0;
	in = NULL;

	if (getline(&in, &size, stdin) == -1)
	{
		if (feof(stdin))
		{
			free(in);
			exit(EXIT_SUCCESS);
		}
		else
		{
			free(in);
			perror("error while reading the line from stdin\n");
			exit(EXIT_FAILURE);
		}
	}

	return (in);
}
