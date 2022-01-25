#include <iostream>
#include <cstdlib>
using namespace std;
void one_line(int guess,int ans)//lol
{
	printf("%s\n",(guess > ans)?"Guess number is too BIG":((guess < ans)?"Guess number is too SMALL":"Oh Yeah! You're right!"));
}
int main()
{
	int guess, ans = rand()%(101);
	while (true)
	{
		cout << "Guess a number: ";
		cin >> guess;
		
		if (guess > ans)
		{
			cout << "Guess number is too BIG" << endl;
		} else if (guess < ans) {
			cout << "Guess number is too SMALL" << endl;
		} else {
			cout << "Oh Yeah! You're right!" << endl;
			break;
		}
		
	}
	return 0;
}
