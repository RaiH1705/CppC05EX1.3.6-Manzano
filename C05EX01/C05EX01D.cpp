// C05EX01D LAÇO PRÉ-TESTE VERDADEIRO
#include <iostream>
using namespace std;
int main(){
 int I, R, S;
 I = 1;
 S = 0;
 while (I <= 500)
 {
 R = I - 2 * ( I / 2);
 if (R == 0)
 {
 S = I + S;
 }
 I++;
 }
 cout << S << endl;
 return 0;
}
