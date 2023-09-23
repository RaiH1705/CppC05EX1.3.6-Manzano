// C05EX03P LAÇO PÓS-TESTE FALSO

#include <iostream>
using namespace std;

int main(void){
  int I, R, S, N;
  float M;

  S = 0;
  N = 0;
  I = 50;
  do
  {
    R = I % 2;
    if (R == 0)
    {
      S = I + S;
      cout << S << endl;
      N++;
    }
    I++;
  }
  while (!(I > 70));
  M = S / N;
  cout << "A média das somas é " << M << endl;

  return 0;
}
