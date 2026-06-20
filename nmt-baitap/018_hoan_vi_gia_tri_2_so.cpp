#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  swap(a, b);
  cout << 1ll * 128 * a + 1ll * 97 * b + 1000;
  return 0;
}
