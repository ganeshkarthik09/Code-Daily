#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      v[i] = max(a[i], b[i]);
    }

    vector<int> S(n);
    S[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--) {
      S[i] = max(v[i], S[i + 1]);
    }

    vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
      pref[i + 1] = pref[i] + S[i];
    }

    for (int i = 0; i < q; i++) {
      int l, r;
      cin >> l >> r;
      cout << pref[r] - pref[l - 1];
      if (i < q - 1) cout << " ";
    }
    cout << endl;
  }
  return 0;
}
