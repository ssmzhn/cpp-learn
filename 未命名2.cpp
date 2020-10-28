#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n,a,b,c;
	cin >> n;
	a = n/100;
	b = n/10%10;
	c = n%10;
	cout << "a=" << a << endl << "b=" << b << endl << "c=" << c << endl;
	cout << "a="  << setw(3) << a << endl << "b=" << setw(4) << b << endl << "c=" << setw(5) << c << endl;
	return 0;
}	
