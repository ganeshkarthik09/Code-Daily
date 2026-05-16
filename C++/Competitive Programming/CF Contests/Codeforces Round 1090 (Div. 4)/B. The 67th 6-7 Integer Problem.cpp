
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    vector<int> a(7);
    for (int i = 0; i < 7; ++i) {
      cin >> a[i];
    }
    for (int i = 0; i < 7; ++i) {
      a[i] *= -1;
    }
    int p = *min_element(a.begin(), a.end());
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
      sum += a[i];
      // cout<<a[i]<<endl;
    }
    sum += (2 * (-p));
    cout << sum << endl;
  }
  return 0;
}