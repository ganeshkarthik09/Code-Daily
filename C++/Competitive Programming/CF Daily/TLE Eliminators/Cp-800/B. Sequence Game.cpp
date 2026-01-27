#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    vector<long long> b(n), a;
    for (size_t i = 0; i < n; i++) {
      cin >> b[i];
    }
    a.push_back(b[0]);
    for (size_t i = 1; i < n; i++) {
      if (b[i] >= b[i - 1]) {
        a.push_back(b[i]);
      } else {
        a.push_back(b[i]);
        a.push_back(b[i]);
      }
    }
    cout << a.size() << endl;
    for (int i = 0; i < a.size(); ++i) {
      cout << a[i] << " ";
    }
    cout << endl;
  }
  return 0;
}