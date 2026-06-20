#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> b >> a;

  cout << a / b << endl;
  cout << fixed << setprecision(2) << (float)a / b << endl;

  return 0;
}
