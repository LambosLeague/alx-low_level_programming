#include "holberton.h"

/*
 * main - check lowercase
 *
 * Return: if 1 then error and quits program
 */

int _islower(int c);
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

int _islower(int c)
{
	for (int i = 97; i <=122; i++)
	{
	if (c == i)
	{
	return (1);
	}
	}
	return (0);
}
