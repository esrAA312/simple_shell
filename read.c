#include "hsh.h"
/**
 * re - read a line from the stream
 * Return: pointer that points the the read line
 */
char *re(void)
{
	int g, ch, size;
	char *in;
	char *x = "allocation error in read_stream\n";
	char *y = "reallocation error in read_stream\n";

	size = 1024, g = 0;
	in = malloc(sizeof(char) * size);
	if (in == NULL)
	{
		write(STDOUT_FILENO, x, _strlen(x));
		exit(EXIT_FAILURE); }
	while (1)
	{
		ch = getchar();
		if (ch == EOF)
		{
			free(in);
			exit(EXIT_SUCCESS); }
		else if (ch == '\n')
		{
			in[g] = '\0';
			return (in);
		}
		else
		{
			in[g] = ch;
		}
		g++;
		if (g >= size)
		{
			size += size;
			in = realloc(in, size);
			if (in == NULL)
			{
				write(STDOUT_FILENO, y, _strlen(y));
				exit(EXIT_FAILURE); }
		}
	}
	free(in);
	free(y);
	free(x); }

