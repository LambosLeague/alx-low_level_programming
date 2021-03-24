#include "holberton.h"

/**
 * rev_string - prints just like printf
 * @s: collect the system or user input
 */

void rev_string(char *s)
{
	int length = _strlen(s);
	int cnt = 0;
	char *wrd = s;

	for (; length >= 0; length--, cnt++)
	{
		if (*(s + length) == '\0')
			length -= 1;

		wrd[cnt] = *(s + length);

		if (length <= 0)
			wrd[cnt + 1] = '\0';
	}
	length += 1;
	cnt++;
	while(length < cnt)
	{
		*(s + length) = wrd[length];
		length++;
	}

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
