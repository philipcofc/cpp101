#include <iostream>
#include <limits>

#include "point.h"

using namespace std;

int main(void) {
	//This node is created and allocated on the stack
	point p;
	p.x = 10;
	p.y = 20;
	p.z = 30;

	cout << "Value of p.x: " << p.x << endl;
	cout << "Value of p.y: " << p.y << endl;
	cout << "Value of p.z: " << p.z << endl << endl;

	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of struct node ptr: " << sizeof(struct point*) << endl;
	cout << "Size of struct node ptr: " << sizeof(struct point*) << endl;
	cout << "Size of struct node: " << sizeof(struct point) << endl;

	cout << "Size of struct may be larger than the sum of it's pieces due to alignment";

	return 0;
}
