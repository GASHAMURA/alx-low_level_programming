#include "main.h"
#include <string.h>

/**
 * _strspn - get length of a prefix substring
 * @s: input
 * @accept: input
 *
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
