//We had trouble copying the text over so we just re-typed it, please forgive us for the comments not being the same.

/* Names: Lucas Estevez, Jackson Seales
 * Class: CS 4500
 * Instructor: Serena Sullivan
 * Due Date: 02/13/2025
 * Project 1 - Makefile
 */

#include "list.h"
#include <stdlib.h>
#include <stdio.h>

//Allocate space for a new list and set its head to NULL
//Returns the created list if successful
list* create_list(){

	//Allocates memory in heap for list object
	list* ptr = malloc(sizeof(list));
	ptr->head = NULL;

	return ptr;
}

//Allocates a new noce and copies the string from item to this node
//Returns: 0 if successful, Nonzero otherwise
int add_to_list(list* ll, char* item){

	//creates node, allocates memory in heap
	node* newNodePtr = malloc(sizeof(node));
	newNodePtr->item = item;
	newNodePtr->next = NULL;
	
	//if head is null
	if(ll->head == NULL){
		ll->head = newNodePtr;
	}

	//iterates through the linkedlist and adds the new node at the end
	else{
		node* ptr = ll->head;
		while(ptr->next != NULL){
			ptr = ptr->next;
		}
		ptr->next=newNodePtr;
	}
	return 0;
}

//Removes the head of the list ll and returns a pointer to the data stored inside
char* remove_from_list(list *ll){
	char* data = 0;

	if(ll->head != NULL){
		//frees first node
		data = ll->head->item;
		node* freePtr = ll->head;
		ll->head = ll->head->next;
		free(freePtr);
	}
	return data;
}

//Prints every string in each node of the list ll.
void print_list(list *ll){
	if(ll->head == NULL){
		puts("This list is empty!");
	}
	else{
		//Iterates through list and prints each node value
		node* nodePtr = ll->head;
		while(nodePtr != NULL){
			puts(nodePtr->item);
			nodePtr=nodePtr->next;
		}
	}
}

//Flushes (clears) the entire list and re-initializes the list
void flush_list(list *ll){
	while (ll->head != NULL){
		remove_from_list(ll);
	}
}

//De-allocates all data for the list, ensures that all memory allocated is freed, including ll itself.
void free_list(list **ll){
	flush_list(*ll);
	free(*ll);
}


