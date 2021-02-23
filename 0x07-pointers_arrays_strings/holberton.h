#ifndef holberton_h
#define holberton_h

#include <unistd.h>

/**
 * _putchar - outputs to screen
 * @c: accept or collect users input and buffers
 * Return: writes to screen
 */

int _putchar(char c);

/**
 * reset_to_98 - changes value of n in main program
 * @n: pointing to value of n in main program
 */

void reset_to_98(int *n);

/**
 * swap_int - changes value of two integerd
 * @a: collects user input
 * @b: collect second user input
 */

void swap_int(int *a, int *b);

/**
 * _strlen - counts length of a sting or char pointer
 * @s: accept user input
 * Return: always return legnth counted
 */

int _strlen(char *s);

/**
 * _puts - print to screen
 * @str: buffering user input to screen
 */

void _puts(char *str);

/**
 * print_rev - prints reverse of a string
 * @s: collects user input
 */

void print_rev(char *s);

/**
 * rev_string - prints reverse of a string
 * @s: collects user input
 */

void rev_string(char *s);

/**
 * _memset - print address of memory
 * @s: strings of character
 * @b: single constant character in memory
 * @n: number of n byte in memory
 * Return - s
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy- print address of memory
 * @dest: strings of character
 * @src: a single character
 * @n: number of n bytes in mempry
 * Return - s
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - check strings
 * @s: strings of letters
 * @c: single to check with
 * Return - c
 */
 
char *_strchr(char *s, char c);

#endif /*end macro holberton_h*/
