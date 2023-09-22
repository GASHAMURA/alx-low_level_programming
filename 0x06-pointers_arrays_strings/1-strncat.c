#include "main.h"

/**
 * _strncpy - function that concantenates two strings
 *
 * @dest: param1 which is a pointer
 * @src: param2 which is a pointer
 * @n: parama int passed to fx
 *
 * Return: a pointer of type char
 *
 */
char *_strncpy(char *dest, char *src, int n)

{
	int i;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
