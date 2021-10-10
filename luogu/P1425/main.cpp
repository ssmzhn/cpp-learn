#include <iostream>

int main()
{
  int a, b, c, d;
  std::cin >> a >> b >> c >> d;
  int startTime = a*60 + b; 
  int endTime = c*60 + d;
  int someAwesomeLanguage = endTime - startTime;
  int hour = someAwesomeLanguage / 60;
  int minute = someAwesomeLanguage - hour*60;
  std::cout << hour << " " << minute;
  return 0;
}