#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    long long x = 3 * n, k = n;
    for (int i = 0; i < n; ++i) {
      cout << x-- << " " << x-- << " " << k-- << " ";
    }
    cout << endl;
  }
  return 0;
}