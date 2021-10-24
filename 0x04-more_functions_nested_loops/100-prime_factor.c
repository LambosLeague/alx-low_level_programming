#include "main.h"

int main(int ac, char **av)
{
	int64_t no, *primed;
	long int cnt = 0, st = 0;

	no = 612852475143;

	primed = primes(no, &cnt);
	while (st < cnt)
	{
		if (st == (cnt - 1))
			printf("%ld\n", primed[st]);
		st++;
	}
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
