#include <iostream>

using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  long long ket_qua = 1ll * 5 * x + 1ll * 2 * y + 1ll * x * y;

  cout << ket_qua << endl;

  return 0;
}
