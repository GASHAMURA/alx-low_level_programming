#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	char alphabet_;

	for (alphabet_ = 'z'; alphabet_ >= 'a'; alphabet_--)
	{
		putchar(alphabet_);
	}
	putchar('\n');
	return (0);
}
