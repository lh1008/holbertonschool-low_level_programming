#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Entry Point
 * Desc: print_strings function
 * @separator: char type
 * @n: unsigned type
 * Return: Function that prints strings, followed by a new line.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list printls;

	va_start(printls, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(printls, char *);

		if (str == NULL)
		{
			printf("(nil");
		}
		printf("%s", str);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(printls);
	printf("\n");
}
