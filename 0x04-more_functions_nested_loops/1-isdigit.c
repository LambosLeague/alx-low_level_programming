#include "holberton.h"

/**
 * _isdigit - checks for digits
 * @c: ascii number to check with
 * Retrun: with 1 for true, with 0 for false
 */

int _isdigit(int c)
{
	int i = 48;
	
	for (; i <= 57; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
