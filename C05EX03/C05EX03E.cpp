// C05EX03E LAÇO PÓS-TESTE FALSO

#include <iostream>
using namespace std;

int main (void)
{
  int I, R;

  I = 0;
  do
  {
    R = I - 2 * ( I / 2);
    if (R != 0)
      cout << I << endl;
    I++;
  }
  while (!(I > 20));

  return 0;
}
