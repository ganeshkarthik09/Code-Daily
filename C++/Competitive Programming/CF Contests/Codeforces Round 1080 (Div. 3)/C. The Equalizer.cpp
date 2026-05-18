#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    std::cin >> n >> k;
    bool ans = ((n * k) % 2 == 0);  

    int total = 0;
    while (n--) {
      int x;
      std::cin >> x;
      total += x;
    }
    ans |= total & 1; 

    std::cout << (ans ? "YES" : "NO") << std::endl;
  }
  return 0;
}