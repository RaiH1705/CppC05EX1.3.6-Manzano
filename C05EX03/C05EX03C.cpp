// C05EX03C LAÇO PÓS-TESTE FALSO

#include <iostream>
using namespace std;

int main (void)
{
  int S, I;

  S = 0;
  I = 1;
  do
  {
    S = I + S;
    I++;
  }
  while (!(I > 100));

  cout << "A somatoria é: " << S << endl;

  return 0;
}
