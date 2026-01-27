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
    int zeroCount = 0, negCount = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] == 0)
        zeroCount++;
      else if (a[i] == -1)
        negCount++;
    }
    int ans = zeroCount;
    if (negCount % 2 == 0)
      cout << ans << endl;
    else
      cout << ans + 2 << endl;
  }
  return 0;
}