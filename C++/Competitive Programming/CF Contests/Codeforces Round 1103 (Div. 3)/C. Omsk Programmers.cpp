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

long long faah(long long a, long long b, long long x) {
  if (a == b) return 0;
  if (a < b) {
    long long c = b;
    b = a;
    a = c;
  }
  long long r = a - b;
  r = min(faah(a / x, b, x) + 1, r);
  // r=min(faah(a/x,b/x,x)+2,r);
  return r;
}

long long fa(long long a, long long b, long long x) {
  long long r = 0;
  if (a == b) return 0;
  if (a < b) {
    long long c = b;
    b = a;
    a = c;
  }
  if (x == 1) return a - b;

  while (a - b > abs(a / x - b)) {
    // cout<<a<<" "<<b<<" "<<x<<" "<<endl;
    a /= x;
    r++;
    if (a < b) {
      long long c = b;
      b = a;
      a = c;
    }
  }
  return r + (a - b);
}
void solve() {
  // Your logic goes here
  long long a, b, x;
  cin >> a >> b >> x;
  // cout<<a<<" "<<b<<" "<<x<<" "<<endl;
  long long diff = faah(a, b, x);
  cout << diff << " " << endl;
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