// Challenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int DisplayMenu();
char GetUserInput();
int PrintNumbers(const vector<int>& vec);
void AddNumber(vector<int>& vec);
int CalcAndDisplayMean(vector<int> vec);
int DisplaySmallestNumber(vector<int> vec);
int DisplayLargestNumber(vector<int> vec);
int FindNumber(vector<int> vec);

int main()
{
	vector<int> numbers;
	char choice;

	while (true)
	{
		DisplayMenu();
		choice = GetUserInput();

		if (choice == 'Q')
			break;

		switch (choice)
		{
		case 'P':
			PrintNumbers(numbers);
			break;
		case 'A':
			AddNumber(numbers);
			break;
		case 'M':
			CalcAndDisplayMean(numbers);
			break;
		case 'S':
			DisplaySmallestNumber(numbers);
			break;
		case 'L':
			DisplayLargestNumber(numbers);
			break;
		case 'C':
			numbers.clear();
			cout << endl << endl;
			break;
		case 'F':
			FindNumber(numbers);
			break;
		default:
			cout << "Unknown selection, please try again" << endl << endl;
			break;
		}
	}


	return 0;
}

int DisplayMenu()
{
	cout << "P - Print numbers" << endl;
	cout << "A - Add a number" << endl;
	cout << "C - Clear numbers" << endl;
	cout << "M - Display mean of the numbers" << endl;
	cout << "S - Display the smallest number" << endl;
	cout << "L - Display the largest number" << endl;
	cout << "F - Find a number and dislay its number of occurences" << endl;
	cout << "Q - Quit" << endl << endl;
	cout << "Enter your choice: ";

	return 0;
}

char GetUserInput()
{
	char input;
	cin >> input;

	return toupper(input);
}

int PrintNumbers(const vector<int>& vec)
{
	if (vec.size() <= 0)
	{
		cout << "[] - the list is empty" << endl << endl;
		return 0;
	}

	cout << "[";
	for (int i : vec)
	{
		cout << " " << i << " ";
	}
	cout << "]" << endl;

	return 0;
}

void AddNumber(vector<int>& vec)
{
	int addedNumber{ 0 };
	cout << "Enter the integer you want to add: ";
	cin >> addedNumber;
	vec.push_back(addedNumber);
	cout << addedNumber << " added" << endl << endl;
}

int CalcAndDisplayMean(vector<int> vec)
{
	if (vec.size() <= 0)
	{
		cout << "Unable to calculate - no data" << endl << endl;
		return 0;
	}

	int sum{ 0 };
	for (int i : vec) sum += i;

	float mean = static_cast<float>(sum) / vec.size();
	cout << "The mean of the list is " << mean << endl << endl;

	return 0;
}

int DisplaySmallestNumber(vector<int> vec)
{
	if (vec.size() <= 0)
	{
		cout << "Unable to determine the smallest number - no data" << endl << endl;
		return 0;
	}

	int smallest{ vec.at(0) };
	for (int i = 1; i < vec.size(); i++)
	{
		if (vec.at(i) < smallest)
			smallest = vec.at(i);
	}

	cout << "Smallest number is: " << smallest << endl << endl;

	return 0;
}

int DisplayLargestNumber(vector<int> vec)
{
	if (vec.size() <= 0)
	{
		cout << "Unable to determine the largest number - no data" << endl << endl;
		return 0;
	}

	int largest{ vec.at(0) };
	for (int i = 1; i < vec.size(); i++)
	{
		if (vec.at(i) > largest)
			largest = vec.at(i);
	}

	cout << "Largest number is: " << largest << endl << endl;

	return 0;
}

int FindNumber(vector<int> vec)
{
	if (vec.size() <= 0)
	{
		cout << "Unable to find any number - no data" << endl << endl;
		return 0;
	}

	int number;
	cout << "Enter the number to find: ";
	cin >> number;

	int count{ 0 };
	for (int i : vec)
	{
		if (i == number)
			count++;
	}
	cout << "There " << ((count > 1) ? "are " : "is ") + count << " occurence" << ((count > 1) ? "s" : "") << " of the number " + number << endl << endl;

	return 0;
}