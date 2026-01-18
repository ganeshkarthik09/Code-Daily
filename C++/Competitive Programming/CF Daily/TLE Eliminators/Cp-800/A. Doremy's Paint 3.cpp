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
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
      cin >> arr[i];
    }
    map<int, int> freq;
    for (int num : arr) {
      freq[num]++;
    }
    if (freq.size() >= 3)
      cout << "NO" << endl;
    else {
      long long f1 = freq.begin()->second;
      long long f2 = freq.rbegin()->second;
      if (f1 == f2)
        cout << "Yes" << endl;
      else if (n % 2 == 1 && abs(f1 - f2) == 1)
        cout << "Yes" << endl;
      else
        cout << "No" << endl;
    }
  }
  return 0;
}