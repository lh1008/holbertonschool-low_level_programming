#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * op_c - Entry Point
 * Desc: op_c function
 * @op_d: op_s from op_s
 * Return: Char c
 */
void op_c(va_list op_d)
{
	printf("%c", va_arg(op_d, int));
}

/**
 * op_i - Entry Point
 * Desc: op_i function
 * @op_d: op_i from op_s
 * Return: Int i
 */
void op_i(va_list op_d)
{
	printf("%d", va_arg(op_d, int));
}


/**
 * op_f - Entry Point
 * Desc: op_f function
 * @op_d: op_f from op_s
 * Return: Float f - double
 */
void op_f(va_list op_d)
{
	printf("%f", va_arg(op_d, double));
}

/**
 * op_nil - Entry Point
 * Desc: op_nil function
 * @op_d: op_nil from op_s
 * Return: String
 */
void op_nil(va_list op_d)
{
	char *s = va_arg(op_d, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - Entry Point
 * Desc: print_all function
 * @format: format type
 * Return: Function that prints anything.
 */
void print_all(const char * const format, ...)
{

	op_t op_s[] = {
		{"c", op_c},
		{"i", op_i},
		{"f", op_f},
		{"s", op_nil},
		{NULL, NULL},
	};

	va_list op_d;
	unsigned int i = 0, j = 0;
	char *o_o = "";

	va_start(op_d, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (op_s[j].op != NULL)
		{
			if (format[i] == op_s[j].op[0])
			{
				printf("%s", o_o);
				op_s[j].stargate(op_d);
				o_o = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(op_d);
}
