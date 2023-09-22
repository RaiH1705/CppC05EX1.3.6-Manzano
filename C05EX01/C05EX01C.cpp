// C05EX01C LAÇO PRÉ-TESTE VERDADEIRO
#include <iostream>
using namespace std;
int main (void)
{
 int S, I;
 S = 0;
 I = 1;
 while (I <= 100)
 {
  S = I + S;
  I++;
 }
 cout << "A somatoria é: " << S << endl;
 return 0;
}
