// C05EX06C LAÇO INCONDICIONAL

#include <iostream>
using namespace std;

int main (void)
{
  int I, S;

  S = 0; 
  for (I = 1; I <= 100; ++I)
      S = I + S;
  
  cout << S << endl;
  
  return 0;
}
