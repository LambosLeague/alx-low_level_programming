#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

int get_bit(unsigned long int n, unsigned int index);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int putchar(int c);

#endif /* MAIN_H */
