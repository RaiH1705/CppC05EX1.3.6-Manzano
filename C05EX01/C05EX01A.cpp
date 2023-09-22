// C05EX01A LAÇO PRÉ-TESTE VERDADEIRO
#include <iostream>
#include <cmath>
using namespace std;
int main (void)
{
 int I, Q;
 I = 15;
 while (I <= 200)
 {
  Q = pow(I,2);
  cout << Q << endl;
  I = I + 1;
 }
 return 0;
}
