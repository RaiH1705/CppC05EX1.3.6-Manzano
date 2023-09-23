// C05EX03A LAÇO PÓS-TESTE FALSO

#include <iostream>
#include <cmath>
using namespace std;

int main(void){
  int I, Q;

  I = 15;
  do{
    Q = pow(I,2);
    cout << Q << endl;
    I++;
  }
  while(!(I>200));

  return 0;
}
