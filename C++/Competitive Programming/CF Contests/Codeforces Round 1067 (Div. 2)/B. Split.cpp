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
        vector<int> seqA(2 * n);
        for (int i = 0; i < 2 * n; ++i)
        {
            cin >> seqA[i];
        }
        unordered_map<int, int> mpp;
        vector<int> p(n);
        vector<int> q(n);
        for (int i = 0; i < 2 * n; i++)
        {
            mpp[seqA[i]]++;
        }
        int ans = 0;
        for (auto &entry : mpp)
        {
            int freq = entry.second;
            if (freq % 2 == 0)
            {
                ans += 2;
            }
            else
            {
                ans += 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}