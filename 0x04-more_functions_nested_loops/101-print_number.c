void print_number(int n)
{
	int x, len = _int_len(i), i_sqrd = _int_sqr(10, len), cnt;
	if((i < 10) && (i >= 0))
	{
		_putchar(i + 48);
		cnt = 1;
	}
	else
	{
		if ((i < 0) && (i > -10))
		{
			_putchar(45);
			i *= (-1);
			_putchar(i + 48);
			cnt = 2;
		}
		else if (i <= -10)
		{
			_putchar(45);
			i *= (-1);
			cnt = 1;
			while(len != 0)
			{
				x = (i % i_sqrd) / (i_sqrd / 10);
				_putchar(x + 48);
				i_sqrd = i_sqrd / 10;
				len--;
				cnt++;
			}
		}
		else
		{
			cnt = 0;
			while(len != 0)
			{
				x = (i % i_sqrd) / (i_sqrd / 10);
				_putchar(x + 48);
				i_sqrd = i_sqrd / 10;
				len--;
				cnt++;
			}
		}
	}
	/* return (cnt); this works by replacing void to int, length of putchar ocuurence */
}

int _int_len(int i)
{
	int cnt = 0;
	
	if (i < 0)
		i *= (-1);

	while(i != 0)
	{
		i /= 10;
		cnt++;
	}
	return (cnt);
}

int _int_sqr(int x, int y)
{
	if(x == 0)
		return (0);
	if(y < 0)
		return (-1);
	if(y == 0 || x == 1)
		return (1);
	if(y == 1)
		return (x);

	return (x * _int_sqr(x, ( y = y - 1)));
}
