#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if (d < b) {
      cout << -1 << endl;
      continue;
    }
    long long diff = abs(d - b);
    a = a + diff;
    if (a < c)
      cout << -1 << endl;
    else {
      cout << diff + abs(a - c) << endl;
    }
  }
  return 0;
}