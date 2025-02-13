#ifndef LIST_H
#define LIST_H

//We had trouble copying the text over so we just re-typed it, please forgive us for the comments not being the same.
typedef struct Node node;

struct Node {
	char *item;
	node *next;
};

typedef struct List {
	node *head;
} list;

list* create_list();

int add_to_list(list* ll, char* item);

char* remove_from_list(list *ll);

void print_list(list *ll);

void flush_list(list *ll);

void free_list(list **ll);

#endif
