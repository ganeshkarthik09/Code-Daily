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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int ans = 0;
        int jago = -1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                jago = i + k;
            }
            else
            {

                if (i <= jago)
                {
                }
                else
                {
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}