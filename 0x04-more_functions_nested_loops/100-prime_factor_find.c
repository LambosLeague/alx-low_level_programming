#include "main.h"

int main(int ac, char **av)
{
	int64_t no, *primed;
	long int cnt = 0, st = 0;

	if (ac < 1)
	{
		printf("you have no inputs\n");
		return (-1);
	}

	no = _atoi(av[1]);
	printf("prime numbers of %ld:", no);
	if (no <= 0)
	{
		printf(" provide a valid no, greter than 0\n");
	       return (-1);	
	}
	else if (no == 1)
	{
		printf("1\n");
	}

	primed = primes(no, &cnt);
	while (st < cnt)
	{
		printf(" %ld ", primed[st]);

		if (st < (cnt - 1))
			printf("*");
		st++;
	}
	printf("\n");
	free(primed);
	return (0);
}

int64_t *primes(int64_t no, long int *cnt)
{
	int64_t *str;
     	int64_t n = 2;

	*cnt = 0;
	str = malloc(sizeof(*str) * 1);
	if (!str)
		return (0);

	while (!(no < n))
	{
		if (no % n == 0)
		{
			if (*cnt >= 1)
				str = remallocd(str, *cnt);
			str[*cnt] = n;
			no = no / n;
			*cnt = *cnt + 1;
		}
		else if (no % (n + 1) == 0)
		{
			n++;
			if (*cnt >= 1)
				str = remallocd(str, *cnt);
			str[*cnt] = n;
			no = no / n;
			*cnt = *cnt + 1;
		}
		else
		n++;
	}
	return (str);
}

int64_t *remallocd(int64_t *str, int64_t cnt)
{
	int64_t *more, kp = (int64_t)cnt;

	cnt++;
	more = malloc(sizeof(*more) * cnt);

	cnt = kp;
	kp = 0;

	while (kp < cnt)
	{
		more[kp] = str[kp];
		kp++;
	}
	more[kp] = 0;

	free(str);
	return (more);
}

int64_t _atoi(char *s)
{
	int64_t x = 1, unit = 10;

	while (s)
	{
		if (*s == 0)
			return (0);

		if (*s == 45)
		{
			x *= -1;
			s++;
		}

		if (*s >= 48 && *s <= 57)
		{
			x *= (*s - 48);
again:
			if (s[1] >= 48 && s[1] <= 57)
			{
				s++;
				x *= unit;
				if (x > 0)
					x += (*s - 48);
				else
					x += ((*s - 48) * -1);
				goto again;
			}
			else
				return (x);
		}
		if (*s != 45)
			s++;
	}
	return (0);
}
