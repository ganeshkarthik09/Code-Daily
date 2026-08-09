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
  ll n, k, x;
  cin >> n >> k >> x;
  ll mini = (k * (k + 1)) / 2;
  ll maxi = (n * (n + 1) / 2) - ((n - k) * (n - k + 1) / 2);
  if (x <= maxi && x >= mini)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}

int main() {
  FAST_IO

  int t = 1;
  cin >> t;  // Comment this out if the problem has only 1 test case
  while (t--) {
    solve();
  }

  return 0;
}