#include "main.h"

/**
 * print_alphabet_x10 -  prints _putchar, followed by a new line
 * Return: Always  (Success)
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int i;
	for (i = 0; i <= 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
	}

	_putchar('\n');
}
