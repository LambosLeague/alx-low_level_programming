#ifndef LIST_T
#define LIST_T
#include <stddef.h>

struct list
{
	char *str;
	int len;
	struct list *next;
};

typedef struct list list_t;

size_t print_list(const list_t *h);
int _strlen(char *s);

#endif /* LIST_T */
