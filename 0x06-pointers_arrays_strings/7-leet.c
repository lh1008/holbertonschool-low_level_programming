#include "holberton.h"

/**
 * leet - Entry point
 * Desc: leet function
 * @s_o: pointer char type
 * Return: Function that encodes a string into 1337
 **/
char *leet(char *s_o)
{
	int i, j;
	char step[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	i = 0;
	while (s_o[i] != '\0')
	{
		j = 0;
		while (num[j] != '\0')
		{
			if (s_o[i] == step[j])
			{
				s_o[i] = num[j];
			}
			j++;
		}
		i++;
	}
	return (s_o);
}
