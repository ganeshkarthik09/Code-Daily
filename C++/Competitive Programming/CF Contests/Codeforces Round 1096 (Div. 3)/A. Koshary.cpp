#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int x, y;
    cin >> x >> y;
    bool xe, ye;
    if (x % 2 == 0)
      xe = true;
    else
      xe = false;
    if (y % 2 == 0)
      ye = true;
    else
      ye = false;

    if (xe || ye)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}