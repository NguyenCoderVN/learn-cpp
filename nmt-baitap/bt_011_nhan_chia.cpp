#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;

  cout << (long long)N * 2 << endl << endl;
  cout << (long long)N * 10 << endl << endl;
  cout << (int)N / 2 << endl << endl;
  cout << fixed << setprecision(3) << (double)N / 2 << endl;

  return 0;
}
