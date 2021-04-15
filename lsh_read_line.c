#include "shell.h"
/**
 * lsh_read_line - read a line of input from stdin
 * Return: the line from stdin.
 */
char *lsh_read_line(void)
{
	char *line = NULL;
	size_t bufsize = 0;
	int temp;

	temp = getline(&line, &bufsize, stdin);
	if (temp == EOF)
	{
		if (isatty(STDIN_FILENO))
			write(1, "\n", 1);
		free(line);
		return (NULL);
	}
	return (line);
}
