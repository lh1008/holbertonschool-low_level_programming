#include "holberton.h"
#include <stdio.h>
/**
 * is_prime_number - Entry point
 * Desc: is_prime_number
 * @n: type int
 * Return: Function about prime numbers
 **/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, 2));

}

/**
 * is_prime - Entry point
 * Desc: is_prime
 * @n: type int
 * @x: type int
 * Return: Function about prime numbers
 **/
int is_prime(int n, int x)
{
	if (x < n)
	{
		if (n % x == 0)
		{
			return (0);
		}
		return (is_prime(n, x + 1));
	}
	return (1);
}
