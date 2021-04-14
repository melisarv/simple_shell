#include "shell.h"

/**
 * main - main function for shell
 * @argc: number of arguments
 * @argv: array of arguments
 * @env: environment
 * Return: 0
 */

int main(int argc, char **argv, char **env)
{
	char *line = NULL;
	char **args;
	int status = 1;

	if (!argc)
		(void)argc;
	if (!argv)
		(void)argv;
	if (!env)
		(void)env;

	while (status)
	{
		if (isatty(STDIN_FILENO))
			write(1, "#cisfun$ ", 9);

		line = lsh_read_line();
		args = lsh_split_line(line);
		status = lsh_execute(args, line, env);
		free(line);
		free(args);
	}
	return (0);
}
