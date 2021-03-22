#include <stdio.h>
#include "lists.h"

/**
 * print_list - List is a structure containing some data and a pointer
 * @h: this is a pointer
 * Return: number of pointers
 */

size_t print_list(const list_t *h)
{
	unsigned int cnt = 2;
	
	list_t *ptr;
	ptr = (*h).next;

	while((*ptr).next)
	{
		cnt++;
	}

	if((*h).str == NULL && (*ptr).str == NULL)
			printf("[0] (nil)\n");
	else
	{
		printf("[%d] %s\n", h->len, h->str);
		printf("[%d] %s\n", ptr->len, ptr->str);
	}


	return (cnt);
}
