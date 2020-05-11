#include "holberton.h"

/**
 * rot13 - Entry point
 * Desc: rot13 function
 * @s_s: pointer char type
 * Return: Function that encodes a string using rot13
 **/
char *rot13(char *s_s)
{
	int i, j;
	char step[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char up[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s_s[i] != 0)
	{
		j = 0;
		while (step[j] != 0)
		{
			if (s_s[i] == step[j])
			{
				s_s[i] = up[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s_s);
}
