#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int X;
  long long Y;
  char C;
  float F;
  double D;

  cin >> X >> Y >> C >> F >> D;

  cout << X << endl;
  cout << Y << endl;
  cout << C << endl;
  cout << fixed << setprecision(2) << F << endl;
  cout << fixed << setprecision(9) << D << endl;

  return 0;
}
