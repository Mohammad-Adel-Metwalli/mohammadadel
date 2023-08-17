#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @name: array of characters
 * @f: function pointer
 *
 * return: name in specific format
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
