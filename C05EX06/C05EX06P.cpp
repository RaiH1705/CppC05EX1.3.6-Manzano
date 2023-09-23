// C05EX06P LAÇO INCONDICIONAL

#include <iostream>
using namespace std;

int main(void){
  int I, R, S, N;
  float M;

  S = 0;
  N = 0;
  for (I = 50; I <= 70; ++I)
  {
    R = I % 2;
    if (R == 0)
    {
      S = I + S;
      cout << S << endl;
      N++;
    }
  }
  M = S / N;
  cout << "A média das somas é " << M << endl;

  return 0;
}
