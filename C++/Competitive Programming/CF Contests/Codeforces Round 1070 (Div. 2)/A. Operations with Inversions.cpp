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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int count = 0;
        int maxi = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < maxi)
            {
                count++;
            }
            else
            {
                maxi = arr[i];
            }
        }
        cout << count << endl;
    }
    return 0;
}