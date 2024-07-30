#include <iostream>
using namespace std;

// 7) Determinar a sequencia de Collatz.

int sequenciaCollatz(int n) {

  if (n == 1) {
    return 1;
  }
  if (n % 2 == 0) {
    n = n / 2;
  }else{
    n = n * 3 + 1;
  }
  cout << n << " ";
    
  return sequenciaCollatz(n);
}

int main() {
  int n;
  cout << "Digite um número para calcular a sequência de Collatz: ";
  cin >> n;

  cout << "Sequência de Collatz para " << n << ": ";
  while (n > 1) {
    cout << n << " ";
    n = sequenciaCollatz(n);
  }
  return 0;
}
