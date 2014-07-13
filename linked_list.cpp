#include <iostream>
#include <limits>

#include "linked_list.h"

using namespace std;

int main(void) {
	//This node is created and allocated on the heap
	struct node *root = (struct node*) malloc(sizeof(node));
	//root.x = 10; //Why does this cause a compile time error?
	(*root).x = 10; // What's a better way to do this?
	(*root).next = NULL;

	cout << (*root).x << endl;

	free(root);
	return 0;
}
