#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, k;
    cin >> n >> k;
    long long b = n - k;
    if (b <= 1) {
      cout << -1 << endl;
      continue;
    }

    vector<long long> s0(b, 1);
    long long xtra = k; 
    long long e0 = xtra / 2, e1 = xtra - e0;
    s0[0] += e0;
    s0[1] += e1;

    string s;
    for (long long i = 0; i < b; i++) {
      char c = (i % 2 == 0) ? '0' : '1';
      s.append(s0[i], c);
    }
    cout << s << endl;
  }
}