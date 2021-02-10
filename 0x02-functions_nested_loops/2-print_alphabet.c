#include "holberton.h"

/**
 * print_alphabet -display small letters to screen
 *
 * main -entry point
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int l_alpha;

	for (l_alpha = 97; l_alpha <= 122; l_alpha++)
	{
	_putchar(l_alpha);
	}
	_putchar(10);
}

int main(void)
{
	print_alphabet();
	return (0);
}
