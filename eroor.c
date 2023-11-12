#include "hsh.h"
void error(char *arg_v)
{
	char *p = "not found\n", ptr[BUFFER_SIZE];
	int in_count = 1;
	char *s = it_oa(in_count, ptr, 10);

	write(2, "./hsh", 5);
	write(2, ": ", 2);
	write(2, s, _strlen(s));
	write(2, ": ", 2);
	write(2, arg_v, _strlen(arg_v));
	write(2, ": ", 2);
	write(2, p, _strlen(p));
}
