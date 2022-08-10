#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;

	cout << "Please enter something: ";
	cin >> input;

	//Stores the input length in a variable
	int inputLen{ static_cast<int>(input.length()) };

	//Reverses the input string and stores it for the second half
	string reverseString{ input };
	reverse(reverseString.begin(), reverseString.end());

	for (int i = inputLen; i > 0; i--)
	{
		string newString;

		//Leading spaces
		newString.append(string(i - 1, ' '));
		
		//First half
		newString.append(input.substr(0, inputLen - i + 1));

		//Second half if not the first row
		if (i != inputLen)
		{
			newString.append(reverseString.substr(i));
		}

		//Displays ONE row
		cout << newString << endl;
	}

	return 0;
}