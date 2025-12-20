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
        vector<long long> odds, evens;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            if (x % 2 != 0)
                odds.push_back(x);
            else
                evens.push_back(x);
        }

        sort(odds.rbegin(), odds.rend());
        sort(evens.rbegin(), evens.rend());

        int E = evens.size();
        vector<long long> pref(E + 1, 0);
        for (int i = 0; i < E; i++)
            pref[i + 1] = pref[i] + evens[i];

        for (int k = 1; k <= n; k++)
        {
            if (odds.empty())
            {
                cout << "0 ";
                continue;
            }

            long long ans = odds[0];
            int need = k - 1;

            if (need <= E)
            {
                ans += pref[need];
                cout << ans << " ";
            }
            else
            {
                ans += pref[E];
                int rem = need - E;

                if ((1 + rem) % 2 != 0)
                {
                    cout << ans << " ";
                }
                else
                {
                    if (E > 0 && (1 + rem + 1) <= odds.size())
                    {
                        ans -= evens.back();
                        cout << ans << " ";
                    }
                    else
                    {
                        cout << "0 ";
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}