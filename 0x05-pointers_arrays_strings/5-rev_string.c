#include "holberton.h"
/**
 * rev_string - Entry point
 * Desc: rev_string function
 * @s: char type
 * Return: Function that reverses a string
 **/
void rev_string(char *s)
{
	int counter = 0, second = 0, save;

	while (s[counter] != '\0')
	{
		counter++;
	}
	counter--;
	while (second < counter)
	{
		save = s[second];
		s[second] = s[counter];
		s[counter] = save;
		second++;
		counter--;
	}
}
