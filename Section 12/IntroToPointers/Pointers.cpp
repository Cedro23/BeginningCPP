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


	return 0;
}