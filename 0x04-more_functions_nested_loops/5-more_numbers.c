#include "holberton.h"
/**
 * more_numbers - Continue point
 * Desc: more_numbers
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{

	int num = 0, x;

	while (num < 10)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
			_putchar(x / 10 + '0');
			}
			_putchar(x % 10 + '0');
		}
		_putchar(10);
		num++;
	}
}
