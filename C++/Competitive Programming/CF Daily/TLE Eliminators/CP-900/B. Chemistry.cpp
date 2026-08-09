#include <bits/stdc++.h>
using namespace std;

// --- Speed Optimization ---
#define FAST_IO                     \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

// --- Type Aliases ---
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

// --- Macros ---
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define F first
#define S second

// --- Constants ---
const int INF = 1e9 + 7;
const ll LINF = 1e18 + 7;
const ll MOD = 1e9 + 7;  // 998244353

// --- Debugging Tool ---
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  if (n - k == 1) {
    cout << "YES" << endl;
    return;
  }
  unordered_map<char, int> freq;
  for (int i = 0; i < n; ++i) {
    freq[s[i]]++;
  }
  int oddCnt = 0;
  for (auto it : freq)
    if (it.second % 2) oddCnt++;
  if (oddCnt <= k + 1)
    cout << "YES"<<endl;
  else
    cout << "NO"<<endl;
}

int main() {
  FAST_IO

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}