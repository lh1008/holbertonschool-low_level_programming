#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - Entry Point
 * Desc: get_op_func function
 * @s: char type
 * Return: Function that selects the correct function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

