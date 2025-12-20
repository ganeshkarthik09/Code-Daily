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
        int n;
        cin >> n;
        int r, y;
        cin >> y >> r;
        int ans = min(n, r + y / 2);
        cout << ans << endl;
    }
    return 0;
}