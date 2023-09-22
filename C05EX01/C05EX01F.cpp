// C05EX01F LAÇO PRÉ-TESTE VERDADEIRO
#include <iostream>
using namespace std;
int main (void)
{
 int I, R;
 I = 1;
 while (I <= 199)
 {
  R = I % 4;
  if (R == 0)
  cout << I << endl;
  I++;
 }
 return 0;
}
