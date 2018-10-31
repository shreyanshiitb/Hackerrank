#include <iostream>
using namespace std;

int main() {
  unsigned long long val = 3;
  unsigned long long idx = 1;
  unsigned long long t; cin >> t;
  while (t-idx >= val) {
    idx += val;
    val *= 2;
  }
  cout << val - (t - idx);
  return 0;
}
