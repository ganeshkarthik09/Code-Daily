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
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    if (a[0] == a[n - 1]) {
      // All elements equal → impossible
      cout << -1 << "\n";
      continue;
    }

    vector<int> b, c;
    int maxi = a[n - 1];

    for (int x : a) {
      if (x == maxi)
        c.push_back(x);
      else
        b.push_back(x);
    }

    cout << b.size() << " " << c.size() << endl;
    for (int i = 0; i < b.size(); i++)
      cout << b[i] << (i == b.size() - 1 ? "" : " ");
    cout << endl;
    for (int i = 0; i < c.size(); i++)
      cout << c[i] << (i == c.size() - 1 ? "" : " ");
    cout << endl;
  }
  return 0;
}