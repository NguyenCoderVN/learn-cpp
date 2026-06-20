#include <iostream>

using namespace std;

int main() {
  int X, Y, Z, T;

  cin >> X >> Y >> Z >> T;
  cout << Y << ',' << Z << ',' << X << ',' << T << endl;
  cout << (long long)X + Y + Z + T << endl;
  cout << X - Y + (long long)Z * T << endl;

  return 0;
}
