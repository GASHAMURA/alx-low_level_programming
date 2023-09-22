#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: param1 which is a pointer
 * @s2: param2 which is a pointer
 *
 * Return: negative or 0 or positive int
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
			else if (s2[i] < s1[i])
				return (s1[i] - s2[i]);
		}
	}
	return (0);
}
