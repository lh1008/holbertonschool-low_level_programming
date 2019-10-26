BB#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Entry Point
 * Desc: print_all function
 * @format: format type
 * Return: Function that prints anything.
 */
void print_all(const char * const format, ...)
{
	va_list all;
	int count;

	va_start(all, format);

	count = 0;
	while (format != NULL)
	{
		if (s == NULL)
			printf("(nil)");
		switch (format)
		{
		case c:
			printf("%c", va_arg(all, char));
			break;
		case i:
			printf("%d", va_arg(all, int));
			break;
		case f:
			printf("%f", va_arg(all, float));
			break;
		case s:
			printf("%s", va_arg(all, char *));
			break;
		}
		count += 1;
	}
	va_end(all);
}
