#include<iostream>
#include<iomanip>
#include<math.h>

int main()
{
	double a, b, c;
	std::cin >> a >> b >> c;
	double p = 0.5*(a+b+c);
	double s ;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	std::cout << std::fixed << std::setprecision(1) << s;
	return 0;
}
