#include "main.h"
int main(void)
{
    print_triangle(10);
    print_triangle(-3);
    return (0);
}
void print_triangle(int size)
{
	int i = 0, x = size;

	if (size <= 0)
	{
		_putchar(10);
		return;
	}

	int y = 0, J = 0;
	for (; x >= i; )
	{
		if (x > 1 && x != 1)
			_putchar(32);
		i++;
		if ((i + 1) == x)
		{
			J = size - i;
			y = 0;

			for (; y < J; y++)
				_putchar(35);
			i = 0;
			x = size - y;
			_putchar(10);
		}
		if (x == 1)
		{
			for (i = 0; i < size; i++)
				_putchar(35);
			_putchar(10);
			return;
		}
	}
}
