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
        vector<int> colour(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> colour[i];
        }
        int ans = -1;
        set<int> s(colour.begin(), colour.end());
        while (true)
        {
            int p = s.size();
            if (s.find(p) == s.end())
            {
                s.insert(p);
            }
            else
            {
                ans = p;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}