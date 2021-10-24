#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void print_number(int n);

int _int_len(int i);

int _int_sqr(int x, int y);

int64_t *primes(int64_t no, long int *cnt);

int64_t _atoi(char *s);

int64_t *remallocd(int64_t *str, int64_t cnt);

int _putchar(char c);

int _isupper(int c);

int _isdigit(int c);

int mul(int a, int b);

void print_numbers(void);

void print_most_numbers(void);

void more_numbers(void);

void print_line(int n);

void print_diagonal(int n);

void print_square(int size);

void print_triangle(int size);

#endif /*MAIN_H*/
