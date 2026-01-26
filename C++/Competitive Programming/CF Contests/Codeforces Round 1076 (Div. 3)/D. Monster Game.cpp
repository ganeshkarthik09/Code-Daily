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
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }

    sort(a.begin(), a.end());
    vector<long long> bSum(n);
    bSum[0] = b[0];
    for (int i = 1; i < n; i++) {
      bSum[i] = bSum[i - 1] + b[i];
    }
    long long maxi = 0;

    for (int i = 0; i < n; i++) {
      if (i > 0 && a[i] == a[i - 1]) continue;

      long long p = a[i];
      long long valid = n - i;

      auto it = upper_bound(bSum.begin(), bSum.end(), valid);
      long long l = distance(bSum.begin(), it);
      maxi = max(maxi, l * p);
    }

    cout << maxi << endl;
  }
  return 0;
}