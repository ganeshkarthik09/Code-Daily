#include <bits/stdc++.h>
using namespace std;

const int MAX_PRIME_LIMIT = 200000;
vector<long long> primes;
bool is_prime[MAX_PRIME_LIMIT + 1];

void sieve() {
  fill(is_prime, is_prime + MAX_PRIME_LIMIT + 1, true);
  is_prime[0] = is_prime[1] = false;
  for (int p = 2; p * p <= MAX_PRIME_LIMIT; p++) {
    if (is_prime[p]) {
      for (int i = p * p; i <= MAX_PRIME_LIMIT; i += p) is_prime[i] = false;
    }
  }
  for (int p = 2; p <= MAX_PRIME_LIMIT; p++) {
    if (is_prime[p]) {
      primes.push_back(p);
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  sieve();

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
      cout << primes[i] * primes[i + 1] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
  }

  return 0;
}