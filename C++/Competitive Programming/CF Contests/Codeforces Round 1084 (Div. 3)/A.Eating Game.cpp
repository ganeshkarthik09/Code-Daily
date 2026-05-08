#include <iostream>
#include <set>
#include <vector>

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

    set<int> win;
    for (int i = 0; i < n; i++) {
      vector<int> temp = a;
      int curr = i;
      int p = -1;

      int sum = 0;
      for (int x : a) sum += x;

      while (sum > 0) {
        if (temp[curr] > 0) {
          temp[curr]--;
          sum--;
          if (sum == 0) p = curr;
        }
        curr = (curr + 1) % n;
      }
      win.insert(p);
    }
    cout << win.size() << endl;
  }
  return 0;
}