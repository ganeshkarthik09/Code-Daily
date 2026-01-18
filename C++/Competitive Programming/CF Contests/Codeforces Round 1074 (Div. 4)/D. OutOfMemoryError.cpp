#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    long long h;
    cin >> n >> m >> h;
    
    vector<long long> a(n);
    vector<long long> copy(n);
    
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
      copy[i] = a[i];
    }
    
    vector<int> history;
    
    for (int i = 0; i < m; ++i) {
        int b;
        long long c;
        cin >> b >> c;
        b--;
        
        a[b] += c;
        history.push_back(b);
        
        if (a[b] > h) {
            for (int idx : history) {
                a[idx] = copy[idx];
            }
            history.clear();
        }
    }
    
    for (int i = 0; i < n; ++i) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
  }
  return 0;
}