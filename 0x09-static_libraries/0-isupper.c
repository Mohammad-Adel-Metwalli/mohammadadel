#include "main.h"

/**
 * _isupper - check if the letter is uppercase or not
 *
 * @c: checks input of function
 *
 * Return: 1 if 'c' is uppercase
 * else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
