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

    sort(a.begin(), a.end());
    auto last = unique(a.begin(), a.end());
    a.erase(last, a.end());

    int ans = 0;
    int currAns = 0;

    for (int i = 0; i < a.size(); ++i) {
      if (i == 0 || a[i] == a[i - 1] + 1) {
        currAns++;
      } else {
        currAns = 1;
      }
      ans = max(ans, currAns);
    }

    cout << ans << endl;

  }
  return 0;
}