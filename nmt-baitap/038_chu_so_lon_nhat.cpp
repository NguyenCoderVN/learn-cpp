#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;

  int hang_don_vi = N % 10;
  int hang_chuc = N / 10 % 10;
  int hang_tram = N / 100 % 10;
  int hang_ngan = N / 1000;

  cout << max({hang_ngan, hang_tram, hang_chuc, hang_don_vi});

  return 0;
}
