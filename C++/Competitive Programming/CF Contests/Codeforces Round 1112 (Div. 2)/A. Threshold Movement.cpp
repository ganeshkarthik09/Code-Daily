#include <bits/stdc++.h>
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
        for (int i = 0; i < n; i++) cin >> a[i];

        if (n % 2 != 0) {
            cout << "NO"<<endl;
            continue;
        }

        int maxE = INT_MIN;
        int minO  = INT_MAX;

        for (int i = 0; i < n; i++) {
            if ((i + 1) % 2 == 1) minO = min(minO, a[i]);
            else maxE = max(maxE, a[i]);
        }

        bool ok = (minO - maxE >= 2);
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
