#include <stdio.h>

int chk_x(int x);

int main(void)
{
	int x = 1, y;

	for (; x <= 100;)
	{
		y = chk_x(x);
		if (y == 0)
			printf("%d ", x);
		x++;
	}
}

int chk_x(int x)
{
	int y = 0;

	if (x % 15 == 0)
	{
		printf("FizzBuzz ");
		y = 1;
	}
	else if (x % 3 == 0)
	{
		printf("Fizz ");
		y = 1;
	}
	else if (x % 5 == 0)
	{
		printf("Buzz ");
		y = 1;
	}
	else
		x = x;
	if (x == 100)
		printf("\n");
	if (y == 1)
		return (1);
	return (0);
}
