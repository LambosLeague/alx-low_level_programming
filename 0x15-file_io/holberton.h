#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int append_text_to_file(const char *filename, char *text_content);

ssize_t read_textfile(const char *filename, size_t letters);

int _putchar(char c);

int create_file(const char *filename, char *text_content);

#endif /* HOLBERTON_H */
