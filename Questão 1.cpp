#include <iostream>
using namespace std;

//1) Determinar o maior nùmero de de inteiros em um array

int max(int n, int arr[]){
  int x;
  if(n == 1){
    x = arr[0];
  }else{
    x = max(n-1, arr);
    if(x < arr[n-1]){
      x = arr[n-1];
  }
}

return x;
}

int main()
{
    int n = 5;
    int array [n] = {1,2,9,5,6};
    
    int maiorNumero = max(n, array);
    cout << "O maior número desse array é: " << maiorNumero;
    return 0;
}