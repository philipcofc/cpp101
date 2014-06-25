#include <iostream>

void print_fav_numbers(int fav_numbers[]) {
	std::cout << "My favorite numbers are:" << std::endl;
	for(int i=0; i<14; i++) {
		std::cout << "Index " << i << ": " << fav_numbers[i] << std::endl;
	}
}

void print_sizes() {
	std::cout << std::endl << "Sizes are" << std::endl << "-------------------------" << std::endl;
	std::cout << "char: " << sizeof(char) << std::endl;
	std::cout << "short: " << sizeof(short) << std::endl;
	std::cout << "int: " << sizeof(int) << std::endl;
	std::cout << "long: " << sizeof(long) << std::endl;
	std::cout << "float: " << sizeof(float) << std::endl;
	std::cout << "double: " << sizeof(double) << std::endl;
	std::cout << "long double: " << sizeof(long double) << std::endl;
	std::cout << "bool: " << sizeof(bool) << std::endl;
	std::cout << "long long: " << sizeof(long long) << std::endl;
}

void signed_vs_unsigned() {
	signed int s = 2147483648;
	unsigned int u = 0;
	std::cout << std::endl << "Signed vs Unsigned" << std::endl << "-------------------------" << std::endl;
	std::cout << "Signed: (2147483648+1)=" << s+1 << " (2147483648-1)=" << s-1 << std::endl;
	std::cout << "Unsigned: (0+1)=" << u+1 << " (0-1)=" << u-1 << std::endl;
}

int main(void) {
	int age;
	age = 31;
	
	int numbers[14] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43};

	std::cout << "Hello! Chad is " << age << std::endl;

	print_fav_numbers(numbers);
	print_sizes();
	signed_vs_unsigned();

	return 0;
}
