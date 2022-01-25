#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double used, price;
  std::cin >> used;
  if(used <= 150)
  {
    price = used * 0.4463;
  }
  else if(used >= 151 && used <= 400)
  {
    price = (used - 150) * 0.4663 + 150 * 0.4463;
  }
  else
  {
    price = (used - 400) * 0.5663 + 150 * 0.4663 + 200 * 0.4463;
  }
  std::cout << std::fixed << std::setprecision(1) << price << endl;
  return 0;
}