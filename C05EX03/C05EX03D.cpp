// C05EX03D
#include <iostream>
using namespace std;

int main(){
  int I, R, S;

  I = 1;
  S = 0;
  do
  {
    R = I - 2 * ( I / 2);
    if (R == 0)
    {
      S = I + S;
    }
    I++;
  }
  while (!(I > 500));
  cout << S << endl;

  return 0;
}
