#include "shell.h"

/**
 * main - main function for shell
 * @argc: number of arguments
 * @argv: array of arguments
 * @env: environment
 * Return: 0
 */

int main(__attribute__((unused))int argc,
__attribute__((unused)) char **argv, char **env)
{
	char *line = NULL;
	char **args;
	int status;
	int mode_inter = 1;
	
	if (isatty(STDIN_FILENO) != 1)
		mode_inter = 0;

	do {
		if (mode_inter != 0)
			write(STDOUT_FILENO, "#cisfun$ ", 9);

		line = lsh_read_line();
		if(line == NULL)
			break;

		args = lsh_split_line(line);
		if (args == NULL)
			break;

		status = lsh_execute(args, line, env);

		free(line);
		free(args);
	} while (status == 1);
	return (0);
}
