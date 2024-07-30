#include <iostream>
using namespace std;

//2)Determinar a posição (índice) da primeira ocorrência de um dado número em um array de inteiros.

int determinarIndice(int n, int array[], int num){
  if (n == 0) {
    return 0;
  }
  if (array[n - 1] == num) {
    return n - 1;
  }
  return determinarIndice(n - 1, array, num);
}

int main(){ 
  int n = 5;
  int array[n] = {1, 2, 2, 4, 5};
  int num = 2;
  
  int indice = determinarIndice(n, array, num);
    
  cout << "O número " << num << " aparece no índice: " << indice;
    
return 0;
}