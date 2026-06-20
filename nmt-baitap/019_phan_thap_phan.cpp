#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  float F;
  cin >> F;

  cout << (int)F << endl;
  cout << fixed << setprecision(2) << F - (int)F << endl;

  return 0;
}
