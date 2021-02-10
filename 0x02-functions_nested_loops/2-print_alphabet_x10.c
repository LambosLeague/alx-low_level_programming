#include "holberton.h"

/**
 * print_alphabet -display small letters to screen
 *
 * main -entry point
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void);

void print_alphabet_x10(void)
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
	for (int i = 0; i < 11; i++)
	{
	print_alphabet_x10();
	}
	return (0);
}
