#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: concatination of the two strings in new variable
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *se;

	int len1 = 0, len2 = 0;

	if ((s1 && s2) == NULL)
		return (0);

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	se = (char *) malloc((sizeof(char) * (len1 + len2) + 1);

	if (se == NULL)
		return (NULL);

	for (i = 0; i < len1 + len2; i++)
	{
		if (i < len1)
			se[i] = s1[i];
		else
			se[i] = s2[i - len1];
	}

	se[len1 + len2] = '\0';

	return (se);
}
