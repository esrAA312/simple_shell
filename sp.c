#include "hsh.h"

/**
 * split - split a string into multiple strings
 * @line: string to be splited
 *
 * Return: pointer that points to the new array
 */
char **split(char *line)
{
	int buffer, g;
	char **given_toks;
	char *token;
	char *y = "reallocation error in split_line: tokens\n";
	char *x = "allocation error in split_line: tokensi\n";

	buffer = 64;
	g = 0;
	given_toks = malloc(buffer * sizeof(char *));
	if (!given_toks)
	{
		write(STDOUT_FILENO, x, _strlen(x));
		exit(EXIT_FAILURE);
	}
	token = strtok(line, EXPECTED_DELIM);
	for (; token != NULL; )
	{
		if (token[0] == '#')
		{
			break;
		}
		given_toks[g] = token;
		g++;
		if (g >= buffer)
		{
			buffer += buffer;
			given_toks = realloc(given_toks, buffer * sizeof(char *));
			if (!given_toks)
			{
				write(STDOUT_FILENO, y, _strlen(y));
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, EXPECTED_DELIM);
	}
	given_toks[g] = NULL;
	return (given_toks);
}
