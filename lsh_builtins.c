#include "shell.h"
/**
 * get_builtins - Checks for builtins
 * @args: Arguments passed from prompt
 * @line: buffer with line
 * @env: environment
 * Return: 1 if builtins exist, 0 if they don't
 */
int get_builtins(char **args, char *line, char **env)
{
	unsigned int i = 0;

	builtins_t list[] = {
		{"exit", lsh_exit},
		{"env", lsh_env},
		{"cd", lsh_cd},
		{"help", lsh_help},
		{NULL, NULL}
	};

	while (list[i].arg != NULL)
	{
		if (strcmp(list[i].arg, args[0]) == 0)
		{
			list[i].builtin(args, line, env);
			return (1);
		}
		i++;
	}
	return (0);
}
