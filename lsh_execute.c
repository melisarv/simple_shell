#include "shell.h"

/**
 * lsh_launch - program wait for it to terminate.
 * @args: list of arguments (including program).
 * Return: Always returns 1, to continue execution.
 */
int lsh_launch(char **args)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		if (execvp(args[0], args) == -1)
			perror("./shell");

		exit(EXIT_FAILURE);
	} else if (pid < 0)
		perror("./shell");
	else
	{
		do {
		waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}

	return (1);
}

/**
 * lsh_execute - execute shell built-in or launch program
 * @args: list of arguments
 * @line: buffer with line
 * @env: environment
 * Return: 1 if the shell should continue running, 0 if it should terminate
 */
int lsh_execute(char **args, char *line, char **env)
{
	if (args[0] == NULL)
		return (1);

	if (get_builtins(args, line, env) == 1)
		return (1);

	return (lsh_launch(args));
}
