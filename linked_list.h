/*
 * linked_list.h
 *
 *  Created on: Jul 12, 2014
 *      Author: ccravens
 */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

struct point {
	int x;
	int y;
	int z;
	struct node *next;
	struct node *prev;
};

#endif /* LINKED_LIST_H_ */
