#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (n == 1) {
      cout << 0 << endl;
      return 0;
    }
    vector<long long> a(n);
    long long count = 0;
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
  }
  return 0;
}