int main(void) {
	int levels = 0;

	std::cout << "Master: please enter the height of your pyramid: ";
	// Get the user's input here and assign to levels
	// Extra credit: ensure that the user didn't enter invalid stuff - ie a character

	create_pyramid(levels);
	// This should create an ASCII "star pyramid". For example, if the user
	// enters a 3, then the following pyramid will be printed to the screen:
	//   *
	//  ***
	// *****
	//
	// If the user enters a 5, then the following pyramid is printed
	//      *
	//     ***
	//    *****
	//   *******
	//  *********
}
