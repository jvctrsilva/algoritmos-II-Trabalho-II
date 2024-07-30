#include <iostream>
using namespace std;

//4) Substituir as ocorrências de um número x por um número y em um array de inteiros

int substituir(int n, int array[], int x, int y){
  if(n == 0){
    return 0;
  }
  if(array[n - 1] == x) {
    array[n - 1] = y;
  }
  return substituir(n - 1, array, x, y);
}


int main()
{
  
  int n = 5;
  int array [n] = {1,1,1,3,4};
  int x = 1;
  int y = 0;
  
  cout << "Array, antes da substituição de " << x << " por " << y << ":  [ ";
  for(int i = 0; i < n; i++){
    cout << array[i] << " ";
  }
  cout << "]" << endl;

  int sub = substituir(n, array, x, y);
    
  cout << "Array, depois da substituição de " << x << " por " << y << ": [ ";
  for(int i = 0; i < n; i++){
    cout << array[i] << " ";
  }
  cout << "]";

return 0;
}