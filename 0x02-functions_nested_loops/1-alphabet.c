#include "main.h"

/**
 * print_alphabet - function that prints the alphabet, in lowercase
 */
void print_alphabet(void)
{

	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	
		_putchar(alphabet);
	}
	_putchar('\n');
}

