// C05EX01E LAÇO PRÉ-TESTE VERDADEIRO
#include <iostream>
using namespace std;
int main (void)
{
 int I, R;
 I = 0;
 while (I <= 20)
 {
  R = I - 2 * ( I / 2);
  if (R != 0)
  cout << I << endl;
  I++;
 }
 return 0;
}
