#include "holberton.h"

/**
 * _islower - prototype declaration
 * @c: accepts both signed and unsigned integer to correspond to ascii
 * Return: with 0, successful. Else 1, print to stderr
 */

int _islower(int c);

/**
 * main - check lowercase
 *
 * Return: if 1 then error and quits program
 */

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

/**
 * _islower - checks for lowwer and prints error if negative.
 * @c: accepts both signed and unsigned integer to correspond to ascii
 *
 * Return: with 1 prints stderr, with 0 run successfully
 */

int _islower(int c)
{
	for (int i = 97; i <= 122; i++)
	{
	if (c == i)
	{
	return (1);
	}
	}
	return (0);
}
