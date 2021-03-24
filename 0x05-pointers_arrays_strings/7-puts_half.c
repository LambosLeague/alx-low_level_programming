#include "holberton.h"

/**
 * puts_half - cut the rope in half on string
 * @str: collect strings
 */

void puts_half(char *str)
{
	int length = _strlen(str);
	int count = 0; 
	char *s = str;
	char ss[count];
	int half = length / 2;

	for (count = 0; count <= length && half == count; half++, count++)
	{
	ss[count] = *s;
	_putchar(ss[count]);
	s++;
	}
	if (length % 2 != 0)
	{
	int n = (length - 1) / 2;
	_putchar(ss[n]);
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
