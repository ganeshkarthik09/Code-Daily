#include <bits/stdc++.h>
using namespace std;

bool isBeautiful(const vector<int>& a) {
  long long sum = 0;
  for (int x : a) {
    if (x == sum) return false;
    sum += x;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());
    long long max_number = a[n - 1];
    long long min_number = a[0];
    if (max_number == min_number) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
      cout << max_number << " ";
      for (int i = 0; i < n - 1; i++) cout << a[i] << " ";
      cout << endl;
    }
  }
  return 0;
}