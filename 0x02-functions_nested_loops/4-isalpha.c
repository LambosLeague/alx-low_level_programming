#include "holberton.h"

/*
 * main - check lowercase
 *
 * Return: if 1 then error and quits program
 */

int _isalpha(int c);
int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

int _isalpha(int c)
{
	int l;
	int u;

	for (l  = 97, u = 65; l <= 122 && u <= 90; l++, u++)
	{
	if (c == l || c == u)
	{
	return (1);
	}
	}
	return (0);
}
