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
    vector<int> per(n);
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> per[i];
    }
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
  }
  return 0;
}