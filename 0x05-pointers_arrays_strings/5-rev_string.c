#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: String to reverse
 */
void rev_string(char *s)
{
	int i, len, len1;
	char swap;

	len = 0;
	len1 = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	len1 = len - 1;
	for (i = 0; i < len / 2; i++)
	{
		swap = s[i];
		s[i] = s[len1];
		s[len1--] = swap;
	}
}
