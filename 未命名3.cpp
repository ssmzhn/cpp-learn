#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,e;
	cout << "Input: ";
	cin >> a >> b >> c >> d >> e;
	// start a
	a = a/3;
	b = b+a;
	e = e+a;
	// end a;start b
	b = b/3;
	c = c+b;
	a = a+b;
	// end b;start c
	c = c/3;
	d = d+c;
	b = b+c;
	// end c;start d
	d = d/3;
	e = e+d;
	c = c+d;
	// end d; start e
	e = e/3;
	a = a+e;
	d = d+e;
	// end e
	cout << "a=" << a << endl << "b=" << b << endl << "c=" << c << endl << "d=" << d << endl << "e=" << e << endl;
	return 0;
}
