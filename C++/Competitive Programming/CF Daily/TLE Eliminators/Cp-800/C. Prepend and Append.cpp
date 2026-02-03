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
    int left = 0, right = n - 1;
    while (left <= right) {
      if ((s[left] == '0' && s[right] == '1') ||
          (s[left] == '1' && s[right] == '0')) {
        left++, right--;
      } else {
        break;
      }
    }
    cout << right - left + 1 << endl;
  }
  return 0;
}