#include "holberton.h"

/**
 * _puts - prints just like printf
 * @str - collect the system or user input
 */

void print_rev(char *s)
{
	int count = _strlen(s)
	for (;count > 0 && count <= _strlen(s); count--)
	{
	write(1, str, count));
	}
	_putchar(10);
}

/**
 * _strlen - counts length of a sting or char pointer
 * @s: accept user input
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
