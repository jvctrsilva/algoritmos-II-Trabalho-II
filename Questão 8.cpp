#include <iostream>
using namespace std;

// 8) Validação de Parênteses

bool ValidarParenteses(string expressao, int n, int inicio, int fim, int contarParentesesAberto, int contarParentesesFechado) {
  if (inicio > fim) {
    return contarParentesesAberto == contarParentesesFechado;
  }
  if (expressao[inicio] == '(') {
    contarParentesesAberto++;
  }
  if (expressao[inicio] == ')') {
    contarParentesesFechado++;
    if (contarParentesesFechado > contarParentesesAberto) {
      return false;
    }
  }
    
  return ValidarParenteses(expressao, n, inicio + 1, fim, contarParentesesAberto, contarParentesesFechado);
}

int main() {
  string expressao;
    
  cout << "Digite a expressão matemática: ";
  getline(cin, expressao);
    
  int n = expressao.length();
    
  if (ValidarParenteses(expressao, n, 0, n - 1, 0, 0)) {
    cout << "Sua expressão está correta.";
  } else {
    cout << "Sua expressão está incorreta.";
  }
    
  return 0;
}
