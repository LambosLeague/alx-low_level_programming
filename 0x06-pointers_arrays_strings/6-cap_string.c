#include "main.h"

/**
 * cap_string - capitalzes each word if lowercase
 * @s: words to check
 * Return: after modification of s, return s
 */

char *cap_string(char *s)
{
	int i = 0;

	if (s[0] >= 97 && s[0] <= 122)
		s[0] -= 32;

	while (s[i] != 0)
	{
		if (s[i] == 10 || s[i] == 9)
		{
			i++;
			if (s[i] >= 97 && s[i] <= 122)
				s[i] -= 32;
		}
		else if (s[i] != 32 && s[i] != ',' && s[i] != ';' && s[i] != '.' && s[i] == 63 && s[i] != '!' && s[i] != 34 && s[i] != 40 && s[i] != 41 && s[i] != 123 && s[i] != 125)
			i++;
		else if (s[i] == ',')
			i++;
		else if (s[i] == 32 || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == 34 || s[i] == 40 || s[i] == 41 || s[i] == 63 || s[i] == 123 || s[i] == 125)
		{
			i++;
			if (s[i] >= 97 && s[i] <= 122)
				s[i] -= 32;
		}
		else
			i++;
	}

	return (s);
}
