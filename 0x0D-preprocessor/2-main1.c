#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - main program
 *
 * Return: 0 on success
 */

int main(void)
{
	char *file = __FILE__;

	while (*file != '\0')
	{
		_putchar(*file);
		file++;
	}

	_putchar(10);

	return (0);
}
