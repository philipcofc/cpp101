#include <iostream>
#include <stdlib.h>

#include "binary_tree.h"

using namespace std;

struct node* newNode(int x) {
        struct node *n = (struct node*)malloc(sizeof(struct node));
        n->x = x;
        n->left = NULL;
        n->right = NULL;

        return n;
}

struct node* insert(struct node *node, int x) {
        if(node == NULL) {
                return newNode(x);
        } else {
                if(x <= node->x) {
                    cout << "INSERTING " << x << " LEFT OF " << node->x << endl;
                    node->left = insert(node->left, x);
                } else {
					cout << "INSERTING " << x << " RIGHT OF " << node->x << endl;
					node->right = insert(node->right, x);
                }

                return node;
        }
}

int main(void) {
        //Pointer to root node
        struct node *root = NULL;

//        for(int i=0; i<10; i++) {
//        	root = insert(root,(rand()%10));
//        }

        root = insert(root,4);
        root = insert(root,2);
        root = insert(root,3);
        root = insert(root,5);
        root = insert(root,1);
        root = insert(root,7);

        return 0;
}
