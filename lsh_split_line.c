#include "shell.h"
/**
   *lsh_split_line - split a line into tokens (very naively).
   *@line: the line
   *Return: Null-terminated array of tokens
 */

char **lsh_split_line(char *line)
{
	int bufsize = LSH_TOK_BUFSIZE, position = 0;
	char **tokens;
	char *token;

	tokens = malloc(bufsize * sizeof(char *));

	if (!tokens)
	{
		perror("hsh: allocation error\n");
		return (NULL);
	}
	token = strtok(line, LSH_TOK_DELIM);
	while (token != NULL)
	{
		tokens[position] = token;
		position++;
		if (position >= bufsize)
		{
			bufsize += LSH_TOK_BUFSIZE;
			tokens = _realloc(tokens, bufsize - 64, bufsize * sizeof(char *));
			if (!tokens)
			{
				perror("hsh: allocation error\n");
				return (NULL);
			}
		}
		token = strtok(NULL, LSH_TOK_DELIM);
	}
	tokens[position] = NULL;
	return (tokens);
}
