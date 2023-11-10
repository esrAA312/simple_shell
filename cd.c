#include "hsh.h"
/**
* cd - causes normal process termination
* @arg: args
 * Return: -1 to terminate the process
 */

int cd(char **arg)
{
	char cw[1024], *path, *home = getenv("HOME"), *old = getenv("OLDPWD");

	path = arg[1];
	if (path == NULL)
	{
		if (home == NULL)
		{
			fprintf(stderr, "HOME environment variable not set\n");
			return (-1); }
		if (chdir(home) == -1)
		{
			perror("chdir"); } }
	else if (strcmp(path, "-") == 0)
	{
		if (old == NULL)
		{
			fprintf(stderr, "OLDPWD environment variable not set\n");
			return (-1); }
		write(STDOUT_FILENO, "oldpwd", 6);
		write(STDOUT_FILENO, "\n", 1);
		if (chdir(old) == -1)
		{
			perror("chdir"); }
	} else
	{
		if (chdir(path) == -1)
		{
			perror("chdir"); }
	}
	if (getenv("PWD") != NULL)
	{
		putenv("PWD"); }
	if (getcwd(cw, sizeof(cw)) != NULL)
	{
		setenv("PWD", cw, 1); }
	return (-1);
}
