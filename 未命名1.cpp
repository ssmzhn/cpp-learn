#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float a,b;
	a = 10.0/3;
	b = 2.0/3;
	cout << "a=" << a << endl << "b=" << b << endl;
	cout << setprecision(8) << "a=" << a << endl << "b=" << b << endl;
	return 0;
}
