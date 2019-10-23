#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Entry Point
 * Desc: print_name function
 * @name: char type
 * @f: function
 * Return: Function that prints a name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	f(name);
}
