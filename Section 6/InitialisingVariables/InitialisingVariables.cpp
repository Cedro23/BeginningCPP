#include <iostream>

using namespace std;

//This program will calculate the area of a room in square feet

int main()
{

	cout << "Enter the width of the room: ";
	double roomWidth{ 0 };
	cin >> roomWidth;

	cout << "Enter the lenght of the room: ";
	double roomLenght{ 0 };
	cin >> roomLenght;

	cout << "The room area is " << roomLenght * roomWidth << " square feet" << endl;

	return 0;
}
