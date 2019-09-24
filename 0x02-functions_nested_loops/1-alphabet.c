#include "holberton.h"
/**
 * print_alphabet - Continue point
 * Desc: print_alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int az;

	for (az = 97; az < 123; az++)
	{
		_putchar(az);
	}
	_putchar(10);
}
