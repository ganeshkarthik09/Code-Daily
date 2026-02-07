#include <bits/stdc++.h>
using namespace std;
bool check(long long x) {
  long long digs = 0;
  long long zeroes = 0;
  while (x) {
    if (x % 10 == 0) zeroes++;
    digs++;
    x /= 10;
  }
  return zeroes == digs - 1;
}

int main() {
  vector<long long> roundNumbers;
  for (long long i = 1; i <= 999999; i++) {
    if (check(i) == true) roundNumbers.push_back(i);
  }

  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;

    long long answer = 0;
    for (int i = 0; i < roundNumbers.size(); i++) {
      if (roundNumbers[i] <= n)
        answer++;
      else
        break;
    }
    cout << answer << endl;
  }
  return 0;
}
