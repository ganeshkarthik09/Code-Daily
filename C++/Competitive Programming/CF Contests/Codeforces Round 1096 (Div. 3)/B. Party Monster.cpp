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
    string s;
    cin >> s;
    int cntO = 0, cntC = 0;
    for (char c : s) {
      if (c == '(')
        cntO++;
      else
        cntC++;
    }
    if (cntO != cntC) {
      cout << "NO" << endl;
    } else if (cntO == n || cntC == n) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
  return 0;
}
