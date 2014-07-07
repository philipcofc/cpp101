#include <iostream>
#include <limits>

using namespace std;

void references() {
	int a = 5;
	int &b = a;

	cout << endl << "References" << endl << "-----------------" << endl;
	cout << "a's address: " << &a << " b's address: " << &b << endl;
	cout << "a: " << a << endl << "b: " << b << endl;

	a = 10;

	cout << "a: " << a << endl << "b: " << b << endl;
}

void pointers() {
	int a = 100;
	int *p = &a;

	cout << endl << "Pointers" << endl << "-----------------" << endl;
	cout << "a's value is: ";
	cin.get();
	cout << a << endl;

	cout << "a's address is: ";
	cin.get();
	cout << &a << endl;

	cout << "p's value is: ";
	cin.get();
	cout << p << endl;

	cout << "p's address: ";
	cin.get();
	cout << &p << endl;
	
	cout << "p de-referenced: ";
	cin.get();
	cout << *p << endl;
}

void pointers_to_pointers() {
	int a = 200;
	int *p = &a;
	int **z = &p;

	cout << endl << "Pointers to Pointers" << endl << "-----------------" << endl;
	cout << "a's value is: ";
	cin.get();
	cout << a << endl;

	cout << "a's address is: ";
	cin.get();
	cout << &a << endl;

	cout << "p's value is: ";
	cin.get();
	cout << p << endl;
	
	cout << "p's address is: ";
	cin.get();
	cout << &p << endl;	

	cout << "p de-referenced is: ";
	cin.get();
	cout << *p << endl;

	cout << "z's value is: ";
	cin.get();
	cout << z << endl;

	cout << "z de-referenced is: ";
	cin.get();
	cout << *z << endl;

	cout << "z's de-de-referenced is: ";
	cin.get();
	cout << **z << endl;
}

int main(void) {
	references();
	pointers();
	pointers_to_pointers();
	return 0;
}
