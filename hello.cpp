#include <iostream>

void print_fav_numbers(int fav_numbers[]) {
	std::cout << "My favorite numbers are:" << std::endl;
	for(int i=0; i<14; i++) {
		std::cout << "Index " << i << ": " << fav_numbers[i] << std::endl;
	}
}

int main(void) {
	int age;
	age = 31;
	
	int numbers[14] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43};

	std::cout << "Hello! Chad is " << age << std::endl;

	print_fav_numbers(numbers);

	return 0;
}
