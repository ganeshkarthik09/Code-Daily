#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long s, k, m;
        cin >> s >> k >> m;

        long long time = m % k;

        if (k >= s) {
            long long left = s - time;
            if (left < 0) left = 0;
            cout << left << endl;
        } else {
            if ((m / k) % 2 == 0) {
                cout << (s - time) << endl;
            } else {
                cout << (k - time) << endl;
            }
        }
    }
    return 0;
}