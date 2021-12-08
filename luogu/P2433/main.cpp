#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
  int T;
  const double pi = 3.141593;
  std::cin >> T;
  if (T == 1)
  {
    std::cout << "I love Luogu!";
  }
  else if (T == 2)
  {
    std::cout << 2 + 4 << " " << 10 - 2 - 4;
  }
  else if (T == 3)
  {
    std::cout << (14 - (14 % 4)) / 4 << std::endl \
              <<  14 - (14 % 4)      << std::endl \
              << (14 % 4);
  }
  else if (T == 4)
  {
    std::cout << std::fixed << std::setprecision(3) << 500 / 3.0;
  }
  else if (T == 5)
  {
    std::cout << (220 + 260) / (20 + 12);
  }
  else if (T == 6)
  {
    std::cout << sqrt(6 * 6 + 9 * 9);
  }
  else if (T == 7)
  {
    	int n=100;
	n+=10;
	printf("%d\n",n);
	n-=20;
	printf("%d\n",n);
	n=0;
	printf("%d\n",n);
  }
  else if (T == 8)
  {
	cout<<pi*10<<endl<<pi*25<<endl<<4/3*pi*125<<endl;
  }
  else if (T == 9)
  {
    std::cout << ((((1 + 1) * 2) + 1 * 2) + 1) * 2;
  }
  else if (T == 10)
  {

  }
  else if (T == 11)
  {
    std::cout << 1.0 * 100 / 3;
  }
  else if (T == 12)
  {
    std::cout << (int)('M'-'A') + 1 << std::endl << (char)(18 + 'A' - 1);
  }
  else if (T == 13)
  {
    const float pi=3.141593;
	float a=4.0/3*pi*pow(4,3);
	float b=4.0/3*pi*pow(10,3);
	float ans=pow(a+b,1.0/3);
	printf("%.0f",ans);
  }
  else if (T == 14)
  {

  }

  return 0;
}
