#include <string>
#include <iostream>

/*
 * //This is a ugly solution to this problem I did while watching a movie with friends.
 */
void create_pyramid(int levels){
	int starCount = 1;  // Used to keep track of how many stars will be printed per line
	int spaces = (levels*2)-1; // Initialized as the highest number of spaces needed (on the top line) based on how many levels there are. Decreases each line.
	int tempSpaces; // Reset after each line is complete, this will add a space to the string until it reaches 0.
	std::string pyramid = ""; // The string that is printed.

	for(int i=1; i<=levels; i++){ // Loops through each level of the pyramid
		tempSpaces = spaces;
		for(int j=0; j<starCount; j++){ // Loops through the amount of stars that need to be added
			while(tempSpaces!=0){ // Adds all the spaces on the left before starting the stars
				pyramid += " ";
				tempSpaces--;
			}
			pyramid += "*";
		}

		if(spaces>0){
			spaces--;
		}

		pyramid += "\n";
		starCount+= 2;
	}

	std::cout << pyramid;
}

int main(void){
	int levels = 0;

	std::cout << "Master: please enter the height of your pyramid: ";
	// Get the user's input here and assign to levels
	std::cin >> levels;
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

	return 0;
}
