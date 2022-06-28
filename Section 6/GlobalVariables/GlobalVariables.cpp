#include <iostream>

using namespace std;

int height{ 230 }; //Global variable => can be used everywhere in the program
int weight{ 250 };

int main()
{
	int age{ 18 }; //Local variable, scoped to main() function => can be used in the main function
	int weight{ 55 }; //This overwrites the global variable

	cout << age << endl;
	cout << height << endl;
	cout << weight << endl;

	return 0;
}