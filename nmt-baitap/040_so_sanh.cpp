#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  bool test1 = b == max({a, b, c});
  bool test2 = (1ll * a * b * c % 2) == 0;
  bool test3 = (a % 2 == 0) && (b % 2 == 0) && (c % 2 == 0);
  bool test4 = (a % 2 == 1) && (b % 2 == 1) && (c % 2 == 1);
  bool test5 = (a % b == 0) && (a % c == 0);
  bool test6 = (a % b == 0) || (a % c == 0);
  bool test7 = 1ll * a * b * c > 1ll * pow(a, b);

  cout << boolalpha << test1 << endl;
  cout << boolalpha << test2 << endl;
  cout << boolalpha << test3 << endl;
  cout << boolalpha << test4 << endl;
  cout << boolalpha << test5 << endl;
  cout << boolalpha << test6 << endl;
  cout << boolalpha << test7 << endl;

  return 0;
}
