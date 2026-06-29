#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        
        vector<int> mul6, mul2, mul3, rest;
        for (int x : a) {
            if (x % 6 == 0) mul6.push_back(x);
            else if (x % 2 == 0) mul2.push_back(x);
            else if (x % 3 == 0) mul3.push_back(x);
            else rest.push_back(x);
        }
        
        vector<int> ans;
        ans.insert(ans.end(), mul2.begin(), mul2.end());
        ans.insert(ans.end(), rest.begin(), rest.end());
        ans.insert(ans.end(), mul3.begin(), mul3.end());
        ans.insert(ans.end(), mul6.begin(), mul6.end());

        for (int x : ans) cout << x << " ";
        cout << "\n"; // '\n' is generally faster than endl
    }
    return 0;
}