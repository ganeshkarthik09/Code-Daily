#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    long long p, q;
    cin >> p >> q;
    if (3 * p - 2 * q >= 0 && 3 * p - 2 * q <= min(p, q - 1)) {
      cout << "Bob" << endl;
    } else {
      cout << "Alice" << endl;
    }
  }
  return 0;
}