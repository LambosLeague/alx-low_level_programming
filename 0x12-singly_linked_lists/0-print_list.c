#include <stdio.h>
#include "lists.h"

/**
 * print_list - List is a structure containing some data and a pointer
 * @h: this is a pointer
 * Return: number of pointers
 */

size_t print_list(const list_t *h)
{
	unsigned int cnt = 1;
	
	list_t *ptr;

	while(h)
	{
		if((*h).str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		if((*h).next)
		{
			ptr = (*h).next;
			printf("[%d] %s\n", ptr->len, ptr->str);
			cnt++;
		}
		if(!(*ptr).next)
			break;
	}
	return (cnt);
}
