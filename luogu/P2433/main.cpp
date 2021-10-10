#include <iostream>
#include <iomanip>

int main()
{
  int question;
  std::cin >> question;
  switch(question)
  {
    case 1:
      std::cout << "I love Luogu!";
      break;
    case 2:
      int apple1 = 10;
      int xiaoA = 2;
      int uim = 4;
      int eightTailsYong = apple1 - xiaoA - uim;
      std::cout << xiaoA << " " << uim << " " << eightTailsYong;
      break;
    case 3:
      int apple2 = 14;
      int classmate1 = 4;
      int appleEachClassmate = 14/4;
      int sentApple = apple2 - appleEachClassmate*classmate1;
      int bingXiang = apple2 - sentApple;
      std::cout << appleEachClassmate << std::endl << sentApple << std::endl << bingXiang;
      break;
    case 4:
      double cola = 500;
      double classmate2 = 3;
      std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(6) << cola/classmate2;
      break;
    case 5:

  }
  return 0;
}