#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;

  cout << fixed << setprecision(2) << sqrt(N) << endl;
  cout << fixed << setprecision(3) << cbrt(N) << endl;

  return 0;
}
