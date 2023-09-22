// C05EX01I
#include <iostream>
using namespace std;
int main(void){
 int I, ATUAL, ANTERIOR, PROXIMO;
 I = 1;
 ATUAL = 0;
 ANTERIOR = 0;
 PROXIMO = 1;
 while (I <= 15)
 {
 cout << ATUAL << endl;
 ATUAL = ANTERIOR + PROXIMO;
 PROXIMO = ANTERIOR;
 ANTERIOR = ATUAL;
 I++;
 }
 return 0;
}
