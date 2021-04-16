#include "shell.h"

/**
 * lsh_exit - This will run the builtin exit
 * @line: Line buffer of user input
 * @args: Arguments from user
 * @env: Environment
 * Return: void
 */
void lsh_exit(char **args, char *line, char **env)
{
	free(args);
	free(line);
	(void)env;
	exit(0);
}
/**
 * lsh_env - Prints shell environment
 * @args: Arguments split from cmdline
 * @line: User input buffer
 * @env: Environment
 * Return: void
 */
void lsh_env(char **args, char *line, char **env)
{
	int size, i = 0;

	while (env[i] != NULL)
	{
		size = _strlen(env[i]);
		write(1, env[i], size);
		write(1, "\n", 1);
		i++;
	}
	(void)args;
	(void)line;
}
/**
 * lsh_cd - change directory
 * @args: List of args.  args[0] is "cd".  args[1] is the directory.
 * @line: User input buffer
 * @env: Environment
 * Return: void
 */
void lsh_cd(char **args, char *line, char **env)
{
	if (args[1] == NULL)
	{
		write(1, "hsh: expected argument to \"cd\"\n", 36);
	} else if (chdir(args[1]) != 0)
		perror("hsh");
	(void)line;
	(void)env;
}


/**
 * lsh_help - print help
 * @args: List of args.  Not examined.
 * @line: User input buffer
 * @env: Environment
 * Return: void
 */
void lsh_help(char **args, char *line, char **env)
{
	write(1, "project Hoberton School\n", 24);
	write(1, "Type program names and arguments, and hit enter.\n", 48);
	write(1, "The following are built in:\n", 28);

	(void)args;
	(void)line;
	(void)env;
}
