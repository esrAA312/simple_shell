#include "hsh.h"

/**
 * proc - create a new process
 * @args: array of strings that contains the command and its flags
 *
 * Return: 1 if success, 0 otherwise.
 */
int proc(char **args)
{
	pid_t ID;
	int s;

	ID = fork();
	if (ID ==  0)
	{
		if (execvp(args[0], args) == -1)
		{
			perror("./shell");
		}
		exit(EXIT_FAILURE);
	}
	else if (ID < 0)
	{
		perror("error in new_process: forking");
	}
	else
	{
		do {
			waitpid(ID, &s, WUNTRACED);
		} while (!WIFEXITED(s) && !WIFSIGNALED(s));
	}
	return (-1);
}
/**
 * _strncmp - This program compares the first n characters of two strings.
 *@str1:First string to be competed.
 *@str2: Second string to be competed.
 * @n: Number of characters to compare.
 *Return: negative, positive or zero integer.
 */

int _strncmp(char *str1, char *str2, int n)
{ int i, diff;

	for (i = 0; i < n; i++)
	{
		diff = str1[i] - str2[i];
		if (diff > 0 || diff < 0)
			return (diff); }
	return (0);
}
