#include "hsh.h"
/**
 * str_tok - a function that spilt the string
 * @str: command input
 * @s: space separates word
 * Return: string
 */

char **str_tok(char str[BUFFER_SIZE],  char s)
{ char *w, **arg, *d;
	int i = 0, n;

	w = str;
	d = str;
	arg = malloc(BUFFER_SIZE * sizeof(char *));
	if (arg == NULL)
		return (NULL);

	for (n = 0; str[n] != '\0'; n++)
	{
		if (str[n] == s)
		{
			str[n] = '\0';
			arg[i++] = w;
			d++;
			w = d;
			d = &str[n];
		}
		d++;
	}
	arg[i++] = w;
	arg[i] = NULL;
	return (arg); }
