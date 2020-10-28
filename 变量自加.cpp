#include<iostream>
using namespace std;

int main()
{
	int x,y,z1,z2;
	x = 7;
	y = 8;
	z1 = y-(x++);
	z2 = y-(++x);
	cout << "z1=" << z1 << endl << "z2=" << z2;
	return 0;
}
