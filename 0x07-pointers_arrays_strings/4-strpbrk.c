#include "main.h"
#include <string.h>

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: input
 * @accept: input
 *
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
