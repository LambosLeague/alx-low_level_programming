#include <stdio.h>

/**
 * main -entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int ii = 48, jj = 48, kk = 48, ll = 49, cm = 44, spc = 32;
	int m_count = 0;

	while (m_count < 9899)
	{
		putchar(ii);
		putchar(jj);
		putchar(spc);
		putchar(kk);
		putchar(ll);
		putchar(cm);
		putchar(spc);
		ll++;
		m_count++;

		if (ll == 58)
		{
			kk++;
			ll = jj;
		}
		if (kk == 58)
		{
			jj++;
			ll = ii + 2;
			kk = ii;
		}
		if (jj == 58)
		{
			ii++;
			ll = 48;
			kk = 48;
			jj = 48;
		}
		if ((ii == 57) && (jj == 56) && (kk == 57) && (ll == 57))
		{
			cm = 0;
			spc = 10;
		}
	}
	return (0);
}
