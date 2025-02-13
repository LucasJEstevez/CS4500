#include "list.h"
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

int main(void){
	list* listPtr = create_list();

	puts("Attempting to remove element from empty list.");	
	char* removed = remove_from_list(listPtr);
	
	printf("Removed element: %s", removed);
	puts("\nCurrent list state:");
	print_list(listPtr);

	puts("\nAdding two elements to list: Lucas and Jackson.");
	char* name = "Lucas";
	add_to_list(listPtr,name);
	name = "Jackson";
	add_to_list(listPtr,name);
	puts("Current list state:");

	print_list(listPtr);

	puts("\nRemoving element from list.");
	removed = remove_from_list(listPtr);
	
	printf("Removed element: %s", removed);
	puts("\nCurrent list state:");
	print_list(listPtr);

	puts("\nAdding elements to list: Jeremy, Keremy, and Laramie");
	name = "Jeremy";
	add_to_list(listPtr, name);
	name = "Keremy";
	add_to_list(listPtr, name);
	name = "Laramie";
	add_to_list(listPtr, name);
	puts("Current list state:");
	print_list(listPtr);

	puts("\nFreeing List");
	free_list(&listPtr);
}
