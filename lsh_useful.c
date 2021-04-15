#include "shell.h"

/**
* _strcmp - Compare two strings..
* @s1: string.
* @s2: string.
* Return: number < 0 if string 1 less string 2
*         number = 0 if string 1 is equal to string 2
*         number > 0 if string 1 is bigger than string 2
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
	i++;
	}
	return (0);
}

/**
* _strlen - Find the lenght of a string.
* @s: string.
* Return: lenght of the string.
*/
int _strlen(char *s)
{
	int cont = 0;

	while (*(s + cont) != '\0')
	{
		cont++;
	}
	return (cont);
}
