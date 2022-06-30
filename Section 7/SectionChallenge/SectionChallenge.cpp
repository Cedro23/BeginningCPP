#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//Declare 2 empty vectors of integers names vector1 and vector2
	vector<int> vector1;
	vector<int> vector2;

	//Add 10 and 20 to vector1 using push_back() method
	vector1.push_back(10);
	vector1.push_back(20);

	//Display the elements in vector1 using the at() method as well as its size using the size() method
	cout << "Vector1" << endl;
	cout << "First element at index 0: " << vector1.at(0) << endl;
	cout << "Second element at index 1: " << vector1.at(1) << endl;
	cout << "Size : " << vector1.size() << endl;
	cout << "=====================================" << endl << endl;

	//Add 100 and 200 to vector2 using push_back() method
	vector2.push_back(100);
	vector2.push_back(200);

	//Display the elements in vector1 using the at() method as well as its size using the size() method
	cout << "Vector2" << endl;
	cout << "First element at index 0: " << vector2.at(0) << endl;
	cout << "Second element at index 1: " << vector2.at(1) << endl;
	cout << "Size : " << vector2.size() << endl;
	cout << "=====================================" << endl << endl;

	//Declare an empty 2D vector called vector2d
	vector<vector<int>> vector2d;
	
	//Add vector1 to vector2d using push_back() method
	vector2d.push_back(vector1);

	//Add vector2 to vector2d using push_back() method
	vector2d.push_back(vector2);

	//Display the elements in vector1 using the at() method
	cout << "Vector2d" << endl;
	cout << "First element at index 0 0: " << vector2d.at(0).at(0) << endl;
	cout << "Second element at index 0 1: " << vector2d.at(0).at(1) << endl;
	cout << "Third element at index 1 0: " << vector2d.at(1).at(0) << endl;
	cout << "Fourth element at index 1 1: " << vector2d.at(1).at(1) << endl;
	cout << "=====================================" << endl << endl;

	//Change vector1.at(0) to 1000
	vector1.at(0) = 1000;

	//Display the elements in vector1 using the at() method
	cout << "Vector2d" << endl;
	cout << "First element at index 0 0: " << vector2d.at(0).at(0) << endl;
	cout << "Second element at index 0 1: " << vector2d.at(0).at(1) << endl;
	cout << "Third element at index 1 0: " << vector2d.at(1).at(0) << endl;
	cout << "Fourth element at index 1 1: " << vector2d.at(1).at(1) << endl;
	cout << "=====================================" << endl << endl;

	//Display the elements in vector1 using the at() method as well as its size using the size() method
	cout << "Vector1" << endl;
	cout << "First element at index 0: " << vector1.at(0) << endl;
	cout << "Second element at index 1: " << vector1.at(1) << endl;
	cout << "Size : " << vector1.size() << endl;
	cout << "=====================================" << endl << endl;

	return 0;
}