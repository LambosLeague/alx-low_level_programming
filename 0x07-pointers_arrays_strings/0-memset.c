#include "holberton.h"

/**
 * _memcpy- print address of memory
 * @dest: strings of character
 * @src: a single character
 * @n: number of n bytes in mempry
 * Return - s
 */
 
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for(i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);	
}
