#include<iostream>
using namespace std;

int main()
{
	int guess;
	cout << "Guess a number :";
	cin >> guess;
	if (guess > 4)
		cout << "Guess number is too BIG";
	else if (guess < 4)
		cout << "Guess number is too SMALL";
	else
		cout << "Oh Yeah!You're right!";
	return 0;
}
