#include "holberton.h"

/**
 * puts2 - jump a rope on string
 * @str: collect strings
 */

void puts2(char *str)
{
	int length = _strlen(str);
	int count = 0; 
	char *s = str;
	char ss[count];

	for (count = 0; count <= length; count++)
	{
	ss[count] = *s;
	if (count % 2 == 0)
	{
	_putchar(ss[count]);
	}
	s++;
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
