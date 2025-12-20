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

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }

        vector<vector<int>> grid(n, vector<int>(n));
        int val = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                grid[i][j] = val++;
            }
        }

        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                int score = grid[i][j];
                if (i > 0)
                    score += grid[i - 1][j];
                if (i + 1 < n)
                    score += grid[i + 1][j];
                if (j > 0)
                    score += grid[i][j - 1];
                if (j + 1 < n)
                    score += grid[i][j + 1];
                ans = max(ans, score);
            }
        }
        cout << ans << endl;
    }
    return 0;
}