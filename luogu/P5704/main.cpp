#include<iostream>

int main()
{
	char userInput, output;
	std::cin >> userInput;
	output = userInput - ('a'-'A');
	std::cout << output;
	return 0;
}
