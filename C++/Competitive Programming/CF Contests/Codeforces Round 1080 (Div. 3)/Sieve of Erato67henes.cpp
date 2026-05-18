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
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    auto it = find(a.begin(), a.end(), 67);
    if (it != a.end())
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}