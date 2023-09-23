// C05EX06D LAÇO INCONDICIONAL

#include <iostream>
using namespace std;

int main (void)
{
  int I, S, R;

  S = 0; 
  for (I = 1; I <= 500; ++I)
  {
    R = I %2;
    if (R == 0)
    {
      S = I + S;
    }
  }
  cout << S << endl;
  
  return 0;
}
