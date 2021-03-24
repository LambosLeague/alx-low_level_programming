#include "holberton.h"

/**
 * print_rev - prints just like printf
 * @s: collect the system or user input
 */

void print_rev(char *s)
{
	int length = _strlen(s);

	for (; length >= 0; length--)
	{
		_putchar(*(s + length));
	}
	_putchar(10);
}

/**
 * _strlen - counts length of a sting or char pointer
 * @str: accept user input
 * Return: always return legnth counted
 */

int _strlen(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
	count++;
	str++;
	}
	return (count);
}
