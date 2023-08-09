#include "main.h"

/**
 * _strdup - a function that returns a pointer to
 *           a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 *
 * @str: string that we want to copy
 *
 * Return: pointer to the copied string, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *sstr;

	int len = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	sstr = (char *) malloc(sizeof(char) * (len + 1));

	if (sstr == NULL)
		return (NULL);

	while ((sstr[i] = str[i]) != '\0')
		i++;

	return (sstr);
}
