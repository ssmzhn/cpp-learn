#include <iostream>

int main()
{
  int inputYear;
  std::cin >> inputYear;
  if(inputYear % 4 == 0 && inputYear % 100 != 0 || inputYear % 400 == 0)
  {
    std::cout << "1" << std::endl;
  }
  else
  {
    std::cout << "0" << std::endl;
  }
  return 0;
}