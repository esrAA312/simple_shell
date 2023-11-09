#include "hsh.h"
/**
 * error_ex - prints an error message
 * @arg_v: the argument input
 * Return: print the error message if not return 0
 */
void error_ex(char *arg_v)
{
	char *b = "Illegal number", n[3] = "\n", *d = "exit";
	char l[BUFFER_SIZE], ptr[BUFFER_SIZE];
	int count = 1;

	char *s = it_oa(count, ptr, 10);

	strcpy(l, arg_v);
	strcat(l, n);
	arg_v = l;
	write(2, "./hsh", 5);
	write(2, ": ", 2);
	write(2, s, _strlen(s));
	write(2, ": ", 2);
	write(2, d, _strlen(d));
	write(2, ": ", 2);
	write(2, b, _strlen(b));
	write(2, ": ", 2);
	write(2, arg_v, _strlen(arg_v));
}
