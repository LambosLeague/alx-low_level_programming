#include "holberton.h"

/**
 * _strcpy - copy from source and paste to destination
 * @dest: empty buffer to paste to
 * @src: source to copy from
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, len1 = 0, bf, cnt = 0;

	while (src[len] != '\0')
		len++;
	while (dest[len1] != '\0')
		len1++;
	bf = len1;
	while (dest[len1] == '\0')
	{
		dest[len1 + 2] = '\0';
		dest[bf] = src[cnt];
		bf++;
		cnt++;
		len1++;

		if (cnt == len)
			break;
	}

	return (dest);
}
