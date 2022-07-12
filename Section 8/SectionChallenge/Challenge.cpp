/*
	Write a program that asks the user to enter an integer representing the number of cents
	You may assume that the number entered is greater than or equal to zero

	In the US :
	1 dollar is 100 cents
	1 quarter is 25 cents
	1 dime is 10 cents
	1 nickel is 5 cents
	1 penny is 1 cent
*/

/*	Here is a sample run :

	Enter an ammount : 92

	You can provide this change as follows :
	dollars : 0
	quarters : 3
	dimes : 1
	nickels : 1
	cents : 2
*/


#include <iostream>

using namespace std;

int main()
{
	const int CENTS_IN_DOLLAR{ 100 };
	const int CENTS_IN_QUARTER{ 25 };
	const int CENTS_IN_DIME{ 10 };
	const int CENTS_IN_NICKEL{ 5 };

	int amount{ 0 };
	int dollars{ 0 }, quarters{ 0 }, dimes{ 0 }, nickels{ 0 }, cents{ 0 };


	cout << "Enter an amount in cents : ";
	cin >> amount;

	//Dollars
	dollars = amount / CENTS_IN_DOLLAR;
	amount %= CENTS_IN_DOLLAR;

	//Quarters
	quarters = amount / CENTS_IN_QUARTER;
	amount %= CENTS_IN_QUARTER;

	//Dimes
	dimes = amount / CENTS_IN_DIME;
	amount %= CENTS_IN_DIME;

	//Nickels
	nickels = amount / CENTS_IN_NICKEL;
	amount %= CENTS_IN_NICKEL;

	//Cents
	cents = amount;

	//Display
	cout << "You can provide this change as follows :" << endl;
	cout << "dollars : " << dollars << endl;
	cout << "quarters : " << quarters << endl;
	cout << "dimes : " << dimes << endl;
	cout << "nickels : " << nickels << endl;
	cout << "cents : " << cents << endl;


	return 0;
}