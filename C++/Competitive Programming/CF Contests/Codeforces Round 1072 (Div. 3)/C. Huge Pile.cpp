#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        long long n, k;
        cin >> n >> k;
        bool found = false;

        for (int i = 0; i <= 32; ++i)
        {
            long long parts = 1LL << i;
            long long p1 = n / parts;
            long long p2 = (n + parts - 1) / parts;

            if (p1 == k || p2 == k)
            {
                cout << i << endl;
                found = true;
                break;
            }

            if (p2 < k)
            {
                cout << -1 << endl;
                found = true;
                break;
            }
        }

        if (!found)
            cout << -1 << endl;
    }
    return 0;
}