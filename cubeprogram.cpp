// Name: Luke Womack
// Date: 03/01/2022
// Program Title: Cube Program
// Program Description: This program outputs the different measurements for a cube based on input from the user. 

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Named constants

int main()
{

	// Variable declaration

	int choice;
	double sideLength;
	double perimeter;
	double surfaceAreaSide;
	double surfaceAreaBox;
	double volume;

	//Program title and description for the user

	cout << "MENU TEMPLATE with SWITCH CASE" << endl << endl;

	// User input

	cout << "Choose the corresponding number for what task you want to complete." << endl;
	cout << "1 - task #1" << endl;
	cout << "2 - task #2" << endl;
	cout << "3 - task #3" << endl;
	cout << "4 - task #4" << endl;
	cout << "Enter selected number here: ";
	cin >> choice;

	// Calculations
	//perimeter = sideLength + sideLength + sideLength + sideLength;
	//surfaceAreaSide = sideLength * sideLength;
	//surfaceAreaBox = sideLength * sideLength * 6;
	//volume = sideLength * sideLength * sideLength;

	// Output to the screen

	switch (choice)
	{
	case 1:
		cout << "Perform task #1 : Perimeter of one side" << endl;
		cout << "Enter the side length of one side of your cube ( In Inches ): " << endl;
		cin >> sideLength;
		cout << "Processing data..." << endl;
		perimeter = sideLength + sideLength + sideLength + sideLength;
		cout << "The perimeter of one side of your cube ( In Inches ): " << perimeter;
		break;


	case 2:
		cout << "Perform task #2 : Surface area of one side" << endl;
		cout << "Enter the side length of one side of your cube ( In Inches ): " << endl;
		cin >> sideLength;
		cout << "Processing data..." << endl;
		surfaceAreaSide = sideLength * sideLength;
		cout << "The surface area of one side of your cube ( In inches ): " << surfaceAreaSide << endl;
		break;

	case 3:
		cout << "Perform task #3 : Surface area of the entire box" << endl;
		cout << "Enter the side length of one side of your cube ( In Inches ): " << endl;
		cin >> sideLength;
		surfaceAreaBox = sideLength * sideLength * 6;
		cout << "Processing data..." << endl;
		cout << "The surface area of your whole cube is ( In Inches ): " << surfaceAreaBox << endl;
		break;

	case 4:
		cout << "Perform task #4 : Volume of the box" << endl;
		cout << "Enter the side length of one side of your cube ( In Inches ): " << endl;
		cin >> sideLength;
		cout << "Processing data..." << endl;
		volume = sideLength * sideLength * sideLength;
		cout << "The volume of your cube ( In inches ): " << volume << endl;
		break;

	default:
		cout << "Input error; program is terminating" << endl;
	}
	return 0;
}