#include "main.h"

/**
 * is_palindrome -  a function that returns 1 if a string is
 *                  a palindrome and 0 if not.
 *
 * @s: array of characters
 *
 * Return: 1 palindorme, 0 not palindrome
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - get the len of the string
 *
 * @s: array of characters
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check - to check if the string is palind.
 *
 * @s: array of characters
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palind, 0 otherwise
 */

int check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check(s, i + 1, len - 1));
}
