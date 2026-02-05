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
    for (int i = 0; i < n; ++i) cin >> a[i];

    int twos = count(a.begin(), a.end(), 2);
    int prefixTwos = 0;
    int answer = -1;

    for (int i = 0; i < n - 1; ++i) {
      if (a[i] == 2) prefixTwos++;
      if (prefixTwos == twos - prefixTwos) {
        answer = i + 1; 
        break;
      }
    }

    cout << answer << endl;
  }
  return 0;
}