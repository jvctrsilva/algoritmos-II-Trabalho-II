#include <iostream>
using namespace std;

// 5) Inverter a ordem dos elementos de um array de inteiros

int inverterArray(int n, int array[], int inicio, int fim){
  if(inicio >= fim){
    return 0;
  }
  int salvarInicio = array[inicio];
  array[inicio] = array[fim];
  array[fim] = salvarInicio;
  
  return inverterArray(n - 1, array, inicio + 1, fim - 1);
}

int main()
{
  int n = 5;
  int array[n] = {5,4,3,2,1};
  int inicio = 0;
  int fim = n - 1;
  
  cout << "Array antes da inversão:[ ";
  for(int i = 0; i < n; i++){
    cout << array[i] << " ";
  }
  cout << "]" << endl;
  
  int inv = inverterArray(n, array, inicio, fim);
  
  
  cout << "Array após inversão    :[ ";
  for(int i = 0; i < n; i++){
    cout << array[i] << " ";
  }
  cout << "]";

  return 0;
}