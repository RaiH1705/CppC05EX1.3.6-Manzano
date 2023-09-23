// C05EX03F LAÇO PÓS-TESTE FALSO

#include <iostream>
using namespace std;

int main (void)
{
  int I, R;

  I = 1;
  do
  {
    R = I % 4;
    if (R == 0)
      cout << I << endl;
    I++;
  }
  while (!(I > 199));

  return 0;
}
