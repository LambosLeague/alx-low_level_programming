#include "holberton.h"

/* _putchar -prints to screen
 * main -Entry point
 *
 * return -success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{
	char hol_school[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	int length, count;

	length = sizeof(hol_school) / sizeof(hol_school[0]);

	for (count = 0; count <= length; count++)
	{
	_putchar(hol_school[count]);
	}
	_putchar(10);

	return (0);
}
