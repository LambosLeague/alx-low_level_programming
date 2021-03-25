#include "holberton.h"
#include <stdio.h>

/**
 * print_array - list array in hierarchical order
 * @a: array in postion
 * @n: array index
 */

void print_array(int *a, int n)
{
	int i = 0;
	for (; i < n; i++)
	{
		printf("%d", a[i]);
		printf(" ");
	}
	printf("\n");
}
