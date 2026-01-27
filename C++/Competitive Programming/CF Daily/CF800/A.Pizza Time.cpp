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
        int hao = 0, alex = 0;
        int remaining = n;
        while (n >= 3)
        {
            hao++;
            n -= 2;
        }
        cout << hao << endl;
    }
    return 0;
}