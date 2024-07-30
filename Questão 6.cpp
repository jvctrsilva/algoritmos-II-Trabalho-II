#include <iostream>
using namespace std;

// 6) Determinar se uma palavra é um palíndromo.

bool verificarPalindromo(int n, string palavra, int inicio, int fim) {
  if (inicio >= fim) {
    return true;
  }
  if (palavra[inicio] != palavra[fim]) {
    return false;
  }

  return verificarPalindromo(n, palavra, inicio + 1, fim - 1);
}

int main() {
  string palavra;

  cout << "Digite a palavra: ";
  cin >> palavra;

  int n = palavra.length();
  int inicio = 0;
  int fim = n - 1;

  if (verificarPalindromo(n, palavra, inicio, fim)) {
    cout << "A palavra \"" << palavra << "\" é um palíndromo!" << endl;
  } else {
    cout << "A palavra \"" << palavra << "\" não é um palíndromo!" << endl;
  }
  return 0;
}
