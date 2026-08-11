#include <bits/stdc++.h>
using namespace std;

void toBinary(int n) {
    if (n == 0) return;      
    toBinary(n / 2);         
    cout << (n % 2);        
}

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        if (n == 0) {        
            cout << 0 << "\n";
            continue;
        }
        toBinary(n);
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
