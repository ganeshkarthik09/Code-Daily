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
    int preSum = 0;
    for (size_t i = 0; i < n; i++) {
      cin >> a[i];
      preSum += a[i];
    }
    int currSum = 0;
    for (int i = 0; i < n; ++i) {
      currSum += a[i];
      if ((currSum % 2 == 0 && (preSum - currSum) % 2 == 0) ||
          (currSum % 2 == 1 && (preSum - currSum) % 2 == 1)) {
        cout << "YES" << endl;
        break;
      } else if (i == n - 1)
        cout << "NO" << endl;
    }
  }
  return 0;
}