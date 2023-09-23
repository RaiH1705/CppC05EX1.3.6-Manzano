// C05EX03B LAÇO PÓS-TESTE FALSO

#include <iostream>
using namespace std;

int main (void)
{
  int N, T, R;

  cout << "Entre o valor da tabuada: "; cin >> N;
  cin.ignore (80, '\n');
  cout << "\n";
  T = 1;
  do
  {
    R = T * N;
    cout << T << "x" << N << "=" << R << endl;
    T = T + 1;
  }
  while (!(T > 10));

  return 0;
}
