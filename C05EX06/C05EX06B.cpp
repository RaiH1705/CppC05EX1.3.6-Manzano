// C05EX06B LAÇO INCONDICIONAL

#include <iostream>
using namespace std;

int main (void)
{
  int I, N, R;

  cout << "Entre o valor da tabuada: "; cin >> N;
  cin.ignore (80, '\n');
  cout << "\n";
  
  for (I = 1; I <= 10; ++I)
  {
    R = I * N;
    cout << I << " x " << N << " = " << R << endl;
  }
  
  return 0;
}
