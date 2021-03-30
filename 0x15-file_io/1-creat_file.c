#include "holberton.h"

int create_file(const char *filename, char *text_content)
{
	int fd, cnt = 0;
	ssize_t cnt1;

	if (filename == 0)
		return (-1);

	fd = open(filename, O_RDWR | O_TRUNC);
	if (fd < 0)
	{
		fd = creat(filename, 0600);

		if (fd == -1)
		{
			return (-1);
			write(STDOUT_FILENO, "file can not be created\n", 24);
		}
		if (!text_content)
		{
			return (-1);
			write(STDOUT_FILENO, "file can not be written, write “fails”\n", 39);
		}
		else
		{
			while(text_content[cnt] != 0)
			{
				cnt1 = write(fd, &*(text_content + cnt), 1);
				cnt++;
			}
		}
	}
	return (cnt1);
}
