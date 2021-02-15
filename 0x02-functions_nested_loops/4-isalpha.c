#include "holberton.h"

/**
 * _isalpha - checks for uppercase and lowercase
 * @c: accepts integer both signed and non signed and relates it to ascii
 * Return: if 1 then error and quits program
 */

int _isalpha(int c)
{
	int l;
	int u;

	for (l  = 97, u = 65; l <= 122 && u <= 90; l++, u++)
	{
	if (c == l || c == u)
	{
	return (1);
	}
	}
	return (0);
}
