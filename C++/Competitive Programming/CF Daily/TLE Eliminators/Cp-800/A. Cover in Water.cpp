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
        bool conCells = false;
        int totalECells = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n && s[i + 2] == '.')
            {
                conCells = true;
                break;
            }
            if (s[i] == '.')
                totalECells++;
        }

        if (conCells)
            cout << 2 << endl;
        else

            cout << totalECells << endl;
    }
    return 0;
}