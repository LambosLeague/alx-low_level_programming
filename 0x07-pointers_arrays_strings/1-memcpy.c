#include "holberton.h"

/**
 * _strchr - check strings
 * @s: strings of letters
 * @c: single to check with
 * Return - c
 */
 
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	for(i = 0; i < n; i++)
	{
	dest[i] = *src;
	src++;
	}
	return (dest);	
}
