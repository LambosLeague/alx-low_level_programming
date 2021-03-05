#include <stdio.h>

/**
 * main -entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int ii = 48;
	int jj = 48;
	int kk = 48;
	int ll = 49;
	int cm = 44;
	int spc = 32;
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
			ll = 48;
		}
		if (kk == 58)
		{
			jj++;
			ll = 48;
			kk = 48;
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
			cm = 10;		
		}
	}	
	return (0);
}
