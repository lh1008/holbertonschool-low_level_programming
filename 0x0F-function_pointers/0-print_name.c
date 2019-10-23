#include "function_pointers.h"
/**
 * print_name - Entry Point
 * Desc: print_name function
 * @name: char type
 * @f: function
 * @*: char type
 * Return: Function that prints a name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
