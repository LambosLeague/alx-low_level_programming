#include "holberton.h"

/**
 * rev_string - prints just like printf
 * @s: collect the system or user input
 */

void rev_string(char *s)
{
	int count;
	int length = _strlen(s);
	char *last_str = s;
	char ch_str[length];

	for (count = 0; count < length - 1; count++)
	{
	last_str++;
	}
	for (count = 0; count < length; count++)
	{
	ch_str[count] = *last_str;
	last_str--;
	if (count == length)
	{
	break;
	}
	}
	for (count = 0; count < length; count++)
	{
	_putchar(ch_str[count]);
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

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
