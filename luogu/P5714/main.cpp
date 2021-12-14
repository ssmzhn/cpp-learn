#include <iostream>
#include <math.h>

int main()
{
  double mass, high;
  std::cin >> mass >> high;
  double bmi;
  bmi = mass / (high * high);
  if(bmi < 18.5)
  {
    std::cout << "Underweight";
  }
  else if(bmi >= 18.5 && bmi < 24)
  {
    std::cout << "Normal";
  }
  else
  {
    std::cout << bmi << std::endl << "Overweight";
  }
  return 0;
}