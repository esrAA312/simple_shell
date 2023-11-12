#include "hsh.h"

/**
 * proc - create a new process
 * @args: array of strings that contains the command and its flags
 *
 * Return: 1 if success, 0 otherwise.
 */
int proc(char **args)
{
	pid_t ID, wy;
	int s, exit_status = 0;

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
			wy = waitpid(ID, &s, WUNTRACED);
		} while (!WIFEXITED(s) && !WIFSIGNALED(s));

		if (wy == -1) {
			perror("witpid error");
		} else {
			if (WIFEXITED(s)) {
				exit_status = WEXITSTATUS(s);

				if (exit_status == 2) 	
					return (2);
			 else if (exit_status == 127)
					return (127); }

			else {
				printf("Child process exited with status %d\n", exit_status);
			} }



	}
	return (-1);
}
