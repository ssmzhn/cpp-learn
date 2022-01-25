#include <iostream>

int main()
{
  std::string input;
  std::cin >> input;
  int i = 0;
  while(input[i])
  {
    putchar(toupper(input[i]));
    i += 1;
  }
  return 0;
}