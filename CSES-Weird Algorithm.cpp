#include <iostream>
using namespace std;
int main(){
  int n, temp;
  cin >> n;
  cout << n << " ";
  while(n!=1){
    if(n % 2 == 0){
      //Jika Genap
      temp = n /2;
      n = temp;
    cout << n << " ";
    }else{
      temp = (n*3) + 1;
      n = temp;
      cout << n << " ";
    }
  }
}
