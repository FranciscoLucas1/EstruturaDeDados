#include <iostream>
using namespace std;

int main() {

  int num, x;

  cout << "Digite um número para calcular a tabuada." << endl;
  cin >> num;

  for (x = 1; x <= 10; x++) {

    cout << num << "x" << x << "=" << num * x << endl;
  }
}
