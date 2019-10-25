#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Entry Point
 * Desc: print_numbers function
 * @separator: char type
 * @n: unsigned type
 * Return: Function that prints numbers, followed by a new line.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list printls;

	va_start(printls, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(printls, unsigned int));
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(printls);
	printf("\n");
}
