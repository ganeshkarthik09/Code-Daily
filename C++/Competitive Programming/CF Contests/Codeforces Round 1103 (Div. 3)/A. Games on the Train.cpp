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
    vector<int> h(n, 0);
    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 0; i < n; ++i) {
      cin >> h[i];
      mini = min(mini, h[i]);
      maxi = max(maxi, h[i]);
    }
    cout << maxi - mini + 1 << endl;
  }
  return 0;
}