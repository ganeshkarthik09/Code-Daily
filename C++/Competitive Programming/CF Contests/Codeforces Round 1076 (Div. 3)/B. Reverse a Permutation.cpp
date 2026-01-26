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
    vector<int> pos(n + 1);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      pos[a[i]] = i;
    }

    int exIdx = 0;

    for (int v = n; v >= 1; v--) {
      int curr = pos[v];

      if (curr == exIdx) {
        exIdx++;
        continue;
      }
      reverse(a.begin() + exIdx, a.begin() + curr + 1);
      break;
    }

    for (int x : a) cout << x << " ";
    cout << endl;
  }
  return 0;
}
