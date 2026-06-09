#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int X;
  long long Y;
  char C;
  float F;
  double D;
  cin >> X;
  cin >> Y;
  cin >> C;
  cin >> F;
  cin >> D;
  cout << X << "\n";
  cout << Y << "\n";
  cout << C << "\n";
  cout << fixed << setprecision(2) << F << "\n";
  cout << fixed << setprecision(9) << D << "\n";
  return 0;
}
