#include <iostream>
#include <stdlib.h>

#include "linked_list.h"

using namespace std;

node* insert(struct node *current, int x) {
	current->next = (struct node*) malloc(sizeof(struct node));
	current->next->x = x;

	cout << "Insert (" << x << "): " << current->next << endl;

	return current->next;
}

// Example of recursive function
void freeAll(struct node *n) {
	if(n->next == NULL) {
		cout << "Freeing: " << n << endl;
		free(n);
		return;
	} else {
		freeAll(n->next);
		cout << "Freeing: " << n << endl;
		free(n);
	}
}

int main(void) {
	//Pointer to root node
	struct node *root = (struct node*) malloc(sizeof(struct node));
	cout << "Root (0) at: " << root << endl;
	root->x = 0;

	//Pointer to current node
	struct node *current = root;

	// Insert a node after the current node
	current = insert(current, 1);
	current = insert(current, 2);
	current = insert(current, 3);
	current = insert(current, 4);
	current = insert(current, 5);

	current = root;
	while(current != NULL) {
		cout << current->x << endl;
		current = current->next;
	}

	freeAll(root);

	cout << "How many variables have been allocated on the stack?" << endl;
	cout << "How many variables have been allocated on the heap?" << endl;

	return 0;
}
