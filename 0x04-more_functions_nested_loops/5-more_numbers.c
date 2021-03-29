#include "holberton.h"
#include <unistd.h>

/**
 * print_most_numbers - print numbers 0 - 14 over 10 times
 */

void more_numbers(void)
{
	int x = 0, i = 48, y = 0;

	while(y < 10)
	{
		for (; x < 15; x++, i++)
		{
			if (x <= 9)
				_putnumb(i);
			if (i > 57)
			{
				_putchar((x / 10) + 48);
				_putchar((x % 10) + 48);
			}
		}
		_putchar(10);
		x = 0;
		i = 48;
		y++;
	}
}

/**
 * _putnumb - allow print 0 - 9
 * @c - buffers through ascii
 * Return: length of c
 */

int _putnumb(char c)
{
	return (write(1, &c, 1));
}
