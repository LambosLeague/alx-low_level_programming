#include "holberton.h"

void print_line(int n)
{
	int i = 0;

	for (; n > 0 && i < n; i++)
		_putchar(95);
	_putchar(10);
}
