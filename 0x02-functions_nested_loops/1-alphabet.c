#include "holberton.h"

/**
 * print_alphabet - Display small letters to screen
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

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 *
 * Description: this prints lower case of the 25 alphabets
 */

int main(void)
{
	print_alphabet();
	return (0);
}
