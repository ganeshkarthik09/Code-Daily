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
  int n;
  cin >> n;
  string a, b;
  cin >> a >> b;

  int cnta1 = 0, cnta2 = 0;
  int cntb1 = 0, cntb2 = 0;

  for (int i = 0; i < n; ++i) {
    if (a[i] == '1') {
      if (i % 2 == 0)
        cnta1++;
      else
        cnta2++;
    }
    if (b[i] == '1') {
      if (i % 2 == 0)
        cntb1++;
      else
        cntb2++;
    }
  }

  if (cnta1 == cntb1 && cnta2 == cntb2) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
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