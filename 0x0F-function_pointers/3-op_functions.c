#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - Entry Point
 * Desc: op_add function
 * @a: int type
 * @b: int type
 * Return: The sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Entry point
 * Desc: op_sub function
 * @a: int type
 * @b: int type
 * Return: The difference
 **/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mult - Entry point
 * Desc: op_mult function
 * @a: int type
 * @b: int type
 * Return: The product
 **/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Entry point
 * Desc: op_div function
 * @a: int type
 * @b: int type
 * Return: The division
 **/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Entry point
 * Desc: op_mod function
 * @a: int type
 * @b: int type
 * Return: The remainder
 **/
int op_mod(int a, int b)
{
	return (a % b);
}
