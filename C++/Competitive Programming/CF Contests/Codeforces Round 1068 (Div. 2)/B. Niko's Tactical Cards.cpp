#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k1 = 0, k2 = 0, k3;
        cin >> n;
        int k = 0;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; ++i)
        {
            k3 = k1;
            //k1 == minp k2 == maxp
            k1 = min(min(k1 - a[i], k2 - a[i]), min(b[i] - k1, b[i] - k2));
            k2 = max(max(k3 - a[i], k2 - a[i]), max(b[i] - k3, b[i] - k2));
        }
        cout << max(k1, k2) << endl;
    }
    return 0;
}