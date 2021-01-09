#include <iostream> // cout and cin needs
using namespace std;// dont need std::cout again~

int main()
{
	string text; // a string type variable for save user type things
	int number , i; // a int type variable for save user type number of run times and a temp vaule
	number = 1; // run time vaule
	i = 1; //
	// get text
	cout << "Input something pls (q for exit): ";
	cin >> text;
	// if user want exit the program, then do it
	if (text == "q")
	{
		cout << "See you later" << endl;
		exit(0); // 0 for normal exit code
	}
	cout << "Input the number of run times: ";
	cin >> number;
	for ( i=1 ; i < number ; i++ )
	{
		cout << text << endl; // if not the "q", do a repeater and jump in the next loop
	}
	return 0;
}
