#include <iostream> // cout and cin needs
using namespace std;// dont need std::cout again~

int main()
{
	string txt; // a string type variable for save user type things
	
	// the main loop
	while (true)
	{
		// get text
		cout << "Input something pls (q for exit): ";
		cin >> txt;
		// if user want exit the prog, then do it
		if (txt == "q")
		{
			cout << "See you later" << endl;
			exit(0); // 0 for normal exit code
		}
		cout << endl << txt; // if not the "q", do a repeater and jump in the next loop
	}
	return 0;
}
