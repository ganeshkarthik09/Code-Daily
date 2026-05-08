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
    stack<char> st;
    for (int i = 0; i < n; ++i) {
      if (st.empty()) {
        st.push(s[i]);
        continue;
      }
      if (s[i] == st.top()) {
        st.pop();
      } else {
        st.push(s[i]);
      }
    }
    if (st.empty())
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}