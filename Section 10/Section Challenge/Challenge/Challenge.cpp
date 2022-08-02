#include <string>
#include <iostream>

using namespace std;

string EncodeDecode(string message, string alphabet, string key);

int main()
{
	string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string key = "AZERTYUIOPMLKJHGFDSQWXCVBNnbvcxwqsdfghjklmpoiuytreza";
	string message;

	cout << "Please enter a message to encode: ";

	getline(cin, message);

	message = EncodeDecode(message, alphabet, key);
	cout << "The encoded message is: " << message << endl << endl;

	message = EncodeDecode(message, key, alphabet);
	cout << "The decoded message is : " << message << endl;

	return 0;
}

string EncodeDecode(string message, string alphabet, string key)
{
	string newMessage;

	for (size_t i = 0; i < message.length(); i++)
	{
		if (message.at(i) != ' ')
		{
			newMessage.push_back(key.at(alphabet.find(message.at(i))));
		}
		else
			newMessage.push_back(' ');
	}

	return newMessage;
}