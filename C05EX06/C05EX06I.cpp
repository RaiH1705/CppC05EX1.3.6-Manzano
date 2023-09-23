// C05EX06I LAÇO INCONDICIONAL 

#include <iostream>
using namespace std;

int main(void){
  int I, ATUAL, ANTERIOR, PROXIMO;

  ATUAL = 0;
  ANTERIOR = 0;
  PROXIMO = 1;
  for (I = 1; I <= 15; ++I)
  {
    cout << ATUAL << endl;
    ATUAL = ANTERIOR + PROXIMO;
    PROXIMO = ANTERIOR;
    ANTERIOR = ATUAL;
  }
return 0;
}
