#include <stdio.h>
/*
 * main -Entry point
 *
 * return -success
 */

int main(void)
{
	char hol_school[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	int length, count;

	length = sizeof(hol_school) / sizeof(hol_school[0]);

	for (count = 0; count <= length; count++)
	{
	putchar(hol_school[count]);
	}
	putchar(10);

	return (0);
}
