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
    // int mul = 1;
    int negCount = 0;
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
      // mul *= a[i];
      if (a[i] == -1) negCount++;
    }
    int posCount = n - negCount;
    int ans = 0;
    while (posCount < negCount || negCount % 2 == 1) {
      ans++;
      posCount++;
      negCount--;
    }

    cout << ans << endl;
    // else if (sum < 0 && mul == 1)
    //   cout << negCount / 2 << endl;
    
  }
  return 0;
}