#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s1 = "Abdul Hamed finally you did it man\n";
	char *p = "Its pays to step on the dial\n";
	char *rr = _strcpy(p, s1);
	printf("%s", rr);
	
	return (0);
}
