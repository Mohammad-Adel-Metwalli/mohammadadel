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


	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	se = (char *) malloc((sizeof(char) * (len1 + len2)) + 1);

	if (se == NULL)
		return (NULL);

	if (s1)
	{
		for (i = 0; i < len2; i++)
		{
			se[i] = s1[i];
		}
	}
	else if (s2)
		for (i = 0; i < len1; i++)
		{
			se[i] = s2[i];
		}
	else
	{
		for (i = 0; i < len1 + len2; i++)
		{

			if (i < len1)
				se[i] = s1[i];

			else
				se[i] = s2[i - len1];
		}
	}

	se[i] = '\0';

	return (se);
}
