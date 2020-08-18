#include <iostream>
using namespace std;

int main()
{
	int guess;
	
	while (true)
	{
		cout << "Guess a number: ";
		cin >> guess;
		if (guess > 4)
		{
			cout << "Guess number is too BIG" << endl;
		} else if (guess < 4) {
			cout << "Guess number is too SMALL" << endl;
		} else {
			cout << "Oh Yeah! You're right!" << endl;
			break;
		}
	}
	return 0;
}
