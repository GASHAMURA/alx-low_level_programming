#include <unistd.h>
#include "main.h"
/**
 * _putchar - Writes character to the standard output
 * @c: The character to be written
 *
 * eturn: 1 is returned (Success), -1 is returned (Error)
 */
int _putchar(char c)
{

	return write (1, &c, 1);
}
