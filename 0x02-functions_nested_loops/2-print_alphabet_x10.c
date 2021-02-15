#include "holberton.h"

/**
 * print_alphabet_x10 - Display small letters to screen
 */

void print_alphabet_x10(void)
{
	int l_alpha;

	for (l_alpha = 97; l_alpha <= 122; l_alpha++)
	{
	for (int count = 0; count <= 10; count++)
	{
	_putchar(l_alpha);
	}
	}
	_putchar(10);
}
