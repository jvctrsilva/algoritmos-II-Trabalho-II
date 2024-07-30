#include <iostream>
using namespace std;

//3) Determinar a soma dos elementos de um array de inteiros que estão acima de um determinado limiar.

int somarInteiros(int n, int array[], int limiar){
  int somaAtual;
    
  if(n == 0){
    return 0;
  }
  if(array[n - 1] > limiar) {
    somaAtual = array[n - 1];
  }else{
    somaAtual = 0;
  }
  return somaAtual + somarInteiros(n - 1, array, limiar);
}


int main()
{
  int n = 5;
  int array [n] = {11,22,3,4,5};
  int limiar = 10;
  
  int soma = somarInteiros(n, array, limiar);
  
  cout << "A soma dos inteiros do array, que são acima de " << limiar << ", é: " << soma;

return 0;
}