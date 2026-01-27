#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int l, a, b;
    cin >> l >> a >> b;
    cout << l - __gcd(l, b) + a % __gcd(l, b) << endl;
  }

  return 0;
}