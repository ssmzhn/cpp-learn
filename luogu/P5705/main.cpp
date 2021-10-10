#include <cstdio>
#include <iostream>

int main()
{
  char a, b, c, d;
  scanf("%c%c%c.%c", &a, &b, &c, &d);
  std::cout << d << "." << c << b << a;
  return 0;
}