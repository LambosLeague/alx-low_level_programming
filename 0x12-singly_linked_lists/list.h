#ifndef LIST_T
#define LIST_T

struct list
{
	char *str;
	int len;
	struct list *next;
};

typedef struct list list_t;

size_t print_list(const list_t *h);

#endif /* LIST_T */
