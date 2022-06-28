// Section 6 challenge
/*
	Ced's cleaning service
	Charges:
		$25 per small room
		$35 per large room
	Sales tax rate is 6%
	Estimates are valid for 30 days
*/

/*	Pseudo code:
Prompt the user for the number of small and large rooms	they would like cleaned
and provide an estimate such as:

Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost: $110
Tax: $6.6
=================================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main()
{
	const double SMALL_ROOM_PRICE{ 25.0 };
	const double LARGE_ROOM_PRICE{ 35.0 };
	const double TAX_RATE{ 0.06 };
	const int ESTIMATE_EXPIRY{ 30 }; // days

	cout << "Hello, this is Ced's cleaning service !" << endl << endl;

	cout << "How many small rooms would you like cleaned ? ";
	int nbSmallRooms{ 0 };
	cin >> nbSmallRooms;

	cout << "How many large rooms would you like cleaned ? ";
	int nbLargeRooms{ 0 };
	cin >> nbLargeRooms;

	double totalPriceRooms{ SMALL_ROOM_PRICE * nbSmallRooms + LARGE_ROOM_PRICE * nbLargeRooms };
	double totalTaxes{ totalPriceRooms * TAX_RATE };
	cout << "Number of small rooms: " << nbSmallRooms << endl;
	cout << "Number of large rooms: " << nbLargeRooms << endl;
	cout << "Price per small rooms: $" << SMALL_ROOM_PRICE << endl;
	cout << "Price per large rooms: $" << LARGE_ROOM_PRICE << endl;
	cout << "Cost: $" << totalPriceRooms << endl;
	cout << "Tax: $" << totalTaxes << endl;
	cout << "=================================" << endl;
	cout << "Total estimate: $" << totalPriceRooms + totalTaxes << endl;
	cout << "This estimate is valid for " << ESTIMATE_EXPIRY << " days." << endl << endl;
}