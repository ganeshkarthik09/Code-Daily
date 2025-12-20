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
        string s;
        cin >> s;
        s += s;
        int ans = 0;
        int zeros = 0;
        for (char c : s)
        {
            if (c == '1')
            {
                ans = max(ans, zeros);
                zeros = 0;
            }
            else
            {
                zeros++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}