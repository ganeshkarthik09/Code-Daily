#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, s, x;
    cin >> n >> s >> x;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    int sum = accumulate(a.begin(), a.end(), 0);
    if (sum > s)
      cout << "NO" << endl;
    else if (abs(sum - s) % x == 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}