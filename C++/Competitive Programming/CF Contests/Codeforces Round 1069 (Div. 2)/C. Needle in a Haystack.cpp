#include <bits/stdc++.h>
using namespace std;

string afterDel(string s, string t) {
    unordered_map<char, int> remove;
    for (char c : s) remove[c]++;
    string res;
    for (char c : t) {
        if (remove[c] > 0) {
            remove[c]--;
        } else {
            res.push_back(c);
        }
    }
    return res;
}

bool checkPossible(string s, string t) {
    unordered_map<char,int> freq;
    for (char c : t) freq[c]++;
    for (char c : s) {
        if (--freq[c] < 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;

        if (!checkPossible(s, t)) {
            cout << "Impossible" << endl;
            continue;
        }

        sort(t.begin(), t.end());
        string p = afterDel(s, t);

        string ans;
        bool inserted = false;
        for (int i = 0; i < (int)p.size(); i++) {
            if (!inserted && p[i] > s[0]) {
                ans += s;
                inserted = true;
            }
            ans.push_back(p[i]);
        }
        if (!inserted) ans += s;

        cout << ans << endl;
    }
    return 0;
}