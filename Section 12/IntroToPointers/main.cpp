#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//Intro to pointers
	int* p{}; //Visual studio 2022 does not let you have an uninitialised variable
	cout << "Value of p is : " << p << endl;
	cout << "Address of p is : " << &p << endl;
	cout << "sizeof p is : " << sizeof p << endl;

	p = nullptr;
	cout << "Value of p is : " << p << endl;

	cout << endl << "-----------------------" << endl << endl;

	//sizeof pointers is always the same in a program
	int* p1{};
	double* p2{};
	string* p3{};
	vector<int>* p4{};
	unsigned long long* p5{};

	cout << "sizeof of p1 is : " << sizeof p1 << endl;
	cout << "sizeof of p2 is : " << sizeof p2 << endl;
	cout << "sizeof of p3 is : " << sizeof p3 << endl;
	cout << "sizeof of p4 is : " << sizeof p4 << endl;
	cout << "sizeof of p5 is : " << sizeof p5 << endl;

	//The compiler will make sure that the address stored in a pointer variable is of the correct type
	int score{ 10 };
	double high_temps{ 100.7 };

	int* score_ptr{ nullptr };

	//score_ptr = &score;	   // OK
	//score_ptr = &high_temps; // Compiler error - type conflict

	//Using new to allocate storage
	//When you allocate storage in this manner, the storage is on the heap
	//The allocated storage contains garbage date untill initialised
	//The allocated storage does not have a name. The only way to get to that storage is via the pointer
	//If you lose the pointer because it goes out of scope or you reassign it,
	//then you lost your only way to get to that storage and you have a memory leak

	cout << endl << "-----------------------" << endl << endl;

	int* int_ptr{ nullptr };

	int_ptr = new int;
	
	cout << int_ptr << endl;
	cout << *int_ptr << endl; // Garbage data

	*int_ptr = 100;

	cout << *int_ptr << endl; // 100

	//Using delete to deallocate storage
	delete int_ptr;

	//Allocating an array on the heap
	int* array_ptr{ nullptr };
	int size{};

	cout << "How big do you want the array?";
	cin >> size;

	array_ptr = new int[size]; //Allocate array on the heap

	//We can access the array here
	
	delete[] array_ptr;

	return 0;
}