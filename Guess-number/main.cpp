#include<iostream>
using namespace std;

int main()
{
	int guess,number;
	number = 4;
	cout << "Guess a number :";
	cin >> guess;
	if (guess == 4)
	{
		cout << "Oh Yeah!You're right!";
	}
	else if (guess < 4)
	{
		cout << "Guess number is too SMALL";
	}
	else if (guess > 4)
	{
		cout << "Guess number is too BIG";
	}
	return 0;
}
