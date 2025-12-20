// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         vector<int> a(n);
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> a[i];
//         }
//         vector<int> b(n);
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> b[i];
//         }
//         if (k % 2 == 0)
//         {
//             long long maxi = LLONG_MIN;
//             long long sum = 0;
//             for (int i = 0; i < n; ++i)
//             {
//                 sum += a[i];
//                 if (sum > maxi)
//                 {
//                     maxi = sum;
//                 }
//                 if (sum < 0)
//                 {
//                     sum = 0;
//                 }
//             }
//             cout << maxi << endl;
//         }
//         else
//         {
//         }
//     }
//     return 0;
// }

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
        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        vector<long long> b(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }
        long long maxi = LLONG_MIN;
        long long sum = LLONG_MIN;
        for (int i = 0; i < n; ++i)
        {
            if (sum < 0)
                sum = a[i];
            else
                sum += a[i];
            maxi = max(maxi, sum);
        }
        if (k % 2 == 0)
        {
            cout << maxi << endl;
        }
        else
        {
            vector<long long> pre(n);
            pre[0] = a[0];
            for (int i = 1; i < n; ++i)
            {
                pre[i] = max(a[i], pre[i - 1] + a[i]);
            }
            vector<long long> suf(n);
            suf[n - 1] = a[n - 1];
            for (int i = n - 2; i >= 0; --i)
            {
                suf[i] = max(a[i], suf[i + 1] + a[i]);
            }
            long long ans = maxi;
            for (int i = 0; i < n; ++i)
            {
                ans = max(ans, pre[i] + suf[i] - a[i] + b[i]);
            }
            cout << ans << endl;
        }
    }
    return 0;
}