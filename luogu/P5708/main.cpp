#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
  float a, b, c, p, s;
  std::cin >> a >> b >> c;
  p = (a+b+c) / 2;
  s = sqrt(p*(p-a)*(p-b)*(p-c);
  std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(1) << s;
  return 0;
}