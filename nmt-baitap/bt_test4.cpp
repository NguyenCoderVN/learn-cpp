#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;

  int d = N % 10;
  int c = N / 10 % 10;
  int b = N / 100 % 10;
  int a = N / 1000;

  long long ket_qua = 1ll * pow(a, b) + 1ll * pow(c, d);

  cout << ket_qua;

  return 0;
}
