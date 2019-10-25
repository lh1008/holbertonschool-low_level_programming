#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Entry Point
 * Desc: sum_them_all function
 * @n: unsigned int
 * Return: Function that returns the sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list listsum;

	va_start(listsum, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(listsum, unsigned int);


	va_end(listsum);
	return (sum);
}
