#ifndef _LISTS_H
#define _LISTS_H

#define NIL "(nil)"
#define END '\0'

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int putchar(char);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void myStartupFun(void) __attribute__ ((constructor));
void myConstructor(void);

#endif
