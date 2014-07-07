/*******************************************************
* FILENAME : pyramid.cpp				*
* PROGRAMMERS : Jeremy McClelland & Michael Moore	*
* PURPOSE : Creates a pyramid with astericks based 	*
* on the int provided by the user			*
*******************************************************/

// includes
#include <iostream>
#include <string>
#include <stdio.h>


using namespace std;


int main()
{
	//variables
	int i, j, k, n;
	string bigNumber = "Y";

	//begin main
	cout << " Thank you for trying the Pyramid program v1.1 " << endl << endl;
	system("pause");
	cout << endl << " Let's create an awesome pyramid! How many rows would you like to have? " << endl;
	cin >>  n;
	cout << endl;

	while (bigNumber == "Y")
	{
		if (n > 35)


		{ //begin n if
			cout << " Wow! That's a large number. This could end up being a crazy pyramid. " << endl;
			cout << " Would you like to enter a lower number? Y/N" << endl;
			cin >> bigNumber;
			if (bigNumber == "Y")
			{
				cout << endl << " Ok. What number would you like to use instead then? " << endl;
				cin >> n;
				if (n > 35)
				{
					cout << endl;
					bigNumber = "Y";
				}
				else
				{
					bigNumber = "N";
					cout << endl << endl;
				} //end inner if
			} //end if
			else if (bigNumber == "y")
			{
				cout << endl << " Ok. What number would you like to use instead then? " << endl;
				cin >> n;
				if (n > 35)
				{
					cout << endl;
					bigNumber = "Y";
				}
				else
				{
					bigNumber = "N";
					cout << endl << endl;
				} //end inner if
			} //end else if
		} //end while
	} //end n if

		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < (n - i); j++)
				cout << " ";
			for (j = 1; j <= i; j++)
				cout << "*";
			for (k = 1; k < i; k++)
				cout << "*";
				cout << endl;
		} // end for

	cout << endl << endl << " Thank you for trying out pyramid v1.1! " << endl << endl;
	system("pause");
	return 0;
}
