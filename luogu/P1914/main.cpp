#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  int move;
  string passwd;
  cin >> move >> passwd;
  int longth = strlen(passwd.c_str());
  char after_move[longth];
  int i = 0;
  while(i < longth)
  {
    after_move[i] = passwd[i] + move;
    i += 1;
  }
  i = 0;
  while(i < longth)
  {
    cout << after_move[i];
    i += 1;
  }
  return 0;
}