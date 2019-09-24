#include "holberton.h"
/**
 * print_alphabet_x10 - Continue point
 * Desc: printing_alphabet_x10
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int abc = 0;
	int az;

	while (abc < 10)
	{
		for (az = 97; az < 123; az++)
		{
			_putchar(az);
		}
		_putchar(10);
		abc++;
	}
}
