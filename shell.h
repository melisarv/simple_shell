#ifndef _SHELL_H
#define _SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <signal.h>
#include <sys/wait.h>

#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"
extern char **environ;

/**
 * struct builtins - Has builtins and associated funcs
 * @arg: Builtins name
 * @builtin: Mathcing builtin func
 */
typedef struct builtins
{
	char *arg;
	void (*builtin)(char **args, char *line, char **env);
} builtins_t;

char *lsh_read_line(void);
char **lsh_split_line(char *line);
int lsh_execute(char **args, char *line, char **env);
int get_builtins(char **args, char *line, char **env);
void lsh_env(char **args, char *line, char **env);
void lsh_cd(char **args, char *line, char **env);
void lsh_help(char **args, char *line, char **env);
void lsh_exit(char **args, char *line, char **env);


#endif
