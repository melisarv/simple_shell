#include "shell.h"
/**
 * lsh_read_line - read a line of input from stdin
 * Return: the line from stdin.
 */
char *lsh_read_line(void)
{
	char *line = NULL;
	size_t bufsize = 0;

	if (getline(&line, &bufsize, stdin) == -1)
	{
		if (feof(stdin))
			exit(EXIT_SUCCESS);
		else
		{
			perror("./shell: getline\n");
			exit(EXIT_FAILURE);
		}
	}
	return (line);
}
