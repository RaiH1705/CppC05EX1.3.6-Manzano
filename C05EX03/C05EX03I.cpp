// C05EX03I LAÇO PÓS-TESTE FALSO

#include <iostream>
using namespace std;

int main(void){
  int I, ATUAL, ANTERIOR, PROXIMO;

  I = 1;
  ATUAL = 0;
  ANTERIOR = 0;
  PROXIMO = 1;
  do
  {
    cout << ATUAL << endl;
    ATUAL = ANTERIOR + PROXIMO;
    PROXIMO = ANTERIOR;
    ANTERIOR = ATUAL;
    I++;
  }
  while (!(I > 15));
  
  return 0;
}
