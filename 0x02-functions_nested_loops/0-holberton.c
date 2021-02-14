#include "holberton.h"

/**
 * main - This entry point
 *
 * Return: On success,  always 0
 *
 * Description: This is used to print
 */

int main(void)
{
	char hol_school[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	int length, count;

	length = sizeof(hol_school) / sizeof(hol_school[0]);

	for (count = 0; count <= length; count++)
	{
	_putchar(hol_school[count]);
	
	if (hol_school[count] == 'n')
	{
	break;
	}

	}
	_putchar(10);

	return (0);
}
