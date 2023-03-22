// week5.c
#include <stdio.h>
#include <stdlib.h>
#include "list_wk5.h"
#include "hashtable_wk5.h"

int main() {
	int command = 1;
	//HashTable table = create_hashtable(11);
	List strings = new_list();
	char buffer[100];

	while (command) {
		printf("Menu 1 for insert, 2 for remove, 3 for print");
		printf("\n");
		scanf_s("%d", &command);
		switch (command) {
		case 1:
			printf("Enter the string to insert");
			printf("\n");
			scanf_s("%s", buffer, 100);
			//hash_insert(&table, buffer);

			insert_at_front(&strings, buffer);
			break;
		case 2: 
			printf("Enter the string to delete");
			printf("\n");
			scanf_s("%s", buffer, 100);
			delete_from_list(&strings, buffer);
			break;
		case 3: 
			print_list(&strings);
			break;
		}
		printf("\n");
	}
	destroy_list(&strings);
}