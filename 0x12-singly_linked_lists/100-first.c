#include "lists.h"

void constructorFunc(void)__attribute__((constructor));

/**
 * constructorFunc - a function that prints You're beat! and yet,
 * you must allow,\nI bore my house upon my back!\n before
 * the main function is executed.
 */

void constructorFunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
