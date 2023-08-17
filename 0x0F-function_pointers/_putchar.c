#include "function_pointers.h"
#include <unistd.h>

/**
 * _putchar - to print character
 *
 * @c: character to be printed out
 *
 * return: character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
