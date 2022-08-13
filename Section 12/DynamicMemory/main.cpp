#include <iostream>

using namespace std;

int main()
{
	//Integer
	int* intPtr{ nullptr };
	intPtr = new int;

	cout << intPtr << endl;

	delete intPtr;

	//Array of double
	double* tempPtr{ nullptr };
	size_t size{ 0 };

	cout << "How many temps do you need ? ";
	cin >> size;

	tempPtr = new double[size];

	cout << tempPtr << endl;

	delete[] tempPtr;

	cout << endl;
	return 0;
}