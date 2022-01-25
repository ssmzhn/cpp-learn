#include <iostream>

int main()
{
  int school[6], sb[6];
  int i;
  int max = 0, day, dayStudyTime;
  int tired;
  while (i < 7)
  {
    std::cin >> school[i] >> sb[i];
    dayStudyTime = school[i] + sb[i];
    if(max < dayStudyTime)
    {
      max = dayStudyTime;
      day += 1;
    }
    i += 1;
  }
  if(max < 8)
  {
    tired = 0;
  }
  else
  {
    tired = day;
  }
  std::cout << tired;
  return 0;   
}